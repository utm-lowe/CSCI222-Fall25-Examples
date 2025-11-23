#include <iostream>

using namespace std;

// Struct is a class with everything public by default
struct Candidate
{
    char **board; // 2d array of the board
    int n;        // how many queens have we placed?
    int row;      // last row we tried to fill
    int col;      // last col we tried to fill

    Candidate()
    {
        board = nullptr;
        n = 0;
        row = 0;
        col = 0;
    }

    Candidate(int n)
    {
        this->n = n;

        // allocate the board
        board = new char *[n];
        for (int i = 0; i < n; i++)
        {
            board[i] = new char[n];
            for (int j = 0; j < n; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    Candidate(const Candidate &other) : Candidate(other.n)
    {
        // copy the grid from the other one
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[i][j] = other.board[i][j];
            }
        }
        row = other.row;
        col = other.col;
    }

    ~Candidate()
    {
        for (int i = 0; i < n; i++)
        {
            delete[] board[i];
        }
        delete[] board;
    }

    Candidate &operator=(const Candidate &rhs)
    {
        // deallocate our board
        if (board != nullptr)
        {
            for (int i = 0; i < n; i++)
            {
                delete[] board[i];
            }
            delete[] board;
        }

        // copy the copyable fileds
        n = rhs.n;
        row = rhs.row;
        col = rhs.col;

        // allocate a new board
        board = new char *[n];
        for (int i = 0; i < n; i++)
        {
            // allocate the row
            board[i] = new char[n];

            // copy the row
            for (int j = 0; j < n; j++)
            {
                board[i][j] = rhs.board[i][j];
            }
        }
        return *this;
    }
};

// output the candidate
ostream &operator<<(ostream &os, const Candidate &c)
{
    for (int i = 0; i < c.n; i++)
    {
        for (int j = 0; j < c.n; j++)
        {
            if (c.board[i][j] == ' ')
            {
                os << '.';
            }
            else
            {
                os << c.board[i][j];
            }
        }
        os << endl;
    }

    return os;
}

// generate an empty candidate for problem n
Candidate root(int n)
{
    return Candidate(n);
}

// generate the first candidate extension
Candidate first(int n, Candidate &c)
{
    Candidate s(c);

    // find the first empty square
    for (s.row = 0; s.row < n; s.row++)
    {
        for (s.col = 0; s.col < n; s.col++)
        {
            if (s.board[s.row][s.col] == ' ')
            {
                // return once we hit an empty spot
                s.board[s.row][s.col] = 'Q';
                return s;
            }
        }
    }

    return s;
}

// generate the next position
Candidate next(int n, Candidate &c)
{
    Candidate s(c);

    // find the next empty square
    for (s.row; s.row < n; s.row++)
    {
        for (s.col; s.col < n; s.col++)
        {
            if (s.board[s.row][s.col] == ' ')
            {
                // remove the old queen
                s.board[c.row][c.col] = ' ';

                // put the queen in the new spot
                s.board[s.row][s.col] = 'Q';

                // return
                return s;
            }
        }
        s.col = 0;
    }

    return s;
}

bool reject(int n, Candidate &c)
{
    // count the queens in each row and column
    for (int i = 0; i < n; i++)
    {
        // count the row
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (c.board[i][j] == 'Q')
            {
                count++;
            }
        }
        if (count >= 2)
            return true;

        // count columns
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (c.board[j][i] == 'Q')
            {
                count++;
            }
        }
        if (count >= 2)
            return true;
    }

    // check diagonals
    // TL to BR diagonals: i + j = s
    for (int d = -(n - 1); d <= (n - 1); d++)
    {
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int j = i + d;
            if (j >= 0 && j < n && c.board[i][j] == 'Q')
            {
                if (++count >= 2)
                    return true;
            }
        }
    }

    // TR to BL diagonals: i + j = s
    for (int s = 0; s <= 2 * (n - 1); s++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int j = s - i;
            if (j >= 0 && j < n && c.board[i][j] == 'Q')
            {
                if (++count >= 2)
                    return true;
            }
        }
    }

    return false;
}

bool accept(int n, Candidate &c)
{
    // we accept if we have placed n queens
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c.board[i][j] == 'Q')
            {
                count++;
            }
        }
    }
    return count == n;
}

// run the n-queens backtrack
Candidate backtrack(int n, Candidate &c)
{
    if (reject(n, c))
    {
        // return a non-solution
        Candidate s(c);
        s.row = s.col = n;
        return s;
    }

    if (accept(n, c))
    {
        // we've solved it!
        return c;
    }

    Candidate s = first(n, c);
    while (s.row < n)
    { // our version of "NULL"
        Candidate s2 = backtrack(n, s);
        if (s2.row < n)
        {
            // double check that we need to continue
            return s2;
        }
        s = next(n, s);
    }

    // return the failed solution
    return s;
}

int main()
{
    int n;

    // get n
    cout << "n=";
    cin >> n;

    // get the root candidate
    Candidate c = root(n);

    // solve the puzzle
    Candidate s = backtrack(n, c);

    // print the result
    if (s.row >= n)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        cout << s << endl;
    }
}