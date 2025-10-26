// A simple example of inheritance and polymorphism
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// The employee class from the slides
class Employee
{
public:
    // construct an employee
    Employee(string name, double salary) 
    {
        this->name = name;
        this->salary = salary;
    }

    // accessors
    virtual string getName() { return name; }
    virtual double getSalary() { return salary; }

    // display function
    virtual void displayInfo() 
    {
        cout << "Employee: " << name << " Salary: " << salary << endl;
    }

    // bonus calulation
    virtual double calculateBonus() 
    {
        return salary * 0.1;
    }

protected:
    string name; 
    double salary;
};

class Manager : public Employee
{
public:
    Manager(string name, double salary, int teamSize) : Employee(name, salary) // <-- call base class constructor
    {
        this->teamSize = teamSize;
    }

    // override the display function
    virtual void displayInfo() override
    {
        cout << "Manager: " << name 
             << " Salary: " << salary 
             << " Team Size: " << teamSize << endl;;
    }

    virtual double calculateBonus() override
    {
        return 0.1 * salary + teamSize*100;
    }

protected:
    int teamSize;
};


class Executive : public Manager
{
public:
    Executive(string name, double salary, int teamSize, string region) : Manager(name, salary, teamSize)
    {
        this->region = region;
    }

    virtual void displayInfo() override
    {
        cout << region << " Regional Manager: " << name
             << " Salary: " << salary
             << " Team Size: " << teamSize << endl;
    }

    virtual double calculateBonus() override
    {
        return Manager::calculateBonus() + 10000;
    }
private:
    string region;
};

void printRoster(vector<Employee*> &roster);
void runBonus(vector<Employee*> &roster);

int main()
{
    vector<Employee*> roster;

    Employee emp1("John Smith", 50000);
    Manager emp2("Margaret Johnson", 100000, 10);
    Executive emp3("Jane Doe", 250000, 100, "Scranton");

    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

    roster.push_back(&emp1);
    roster.push_back(&emp2);
    roster.push_back(&emp3);

    cout << endl;
    printRoster(roster);
    cout << endl;
    runBonus(roster);
}

void printRoster(vector<Employee*> &roster)
{
    cout << "Company Roster" << endl
         << "==============" << endl;
    
    for(int i=0; i<roster.size(); i++) {
        roster[i]->displayInfo();
    }
}


void runBonus(vector<Employee*> &roster)
{
    cout << "Bonus Time!" << endl
         << "===========" << endl;
    
    for(int i=0; i<roster.size(); i++) {
        cout << roster[i]->getName() << "\t" << roster[i]->calculateBonus() << endl;
    }
}