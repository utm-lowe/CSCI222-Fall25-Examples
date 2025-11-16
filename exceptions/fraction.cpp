/**
 * @file fraction.h
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief A simple fraction object.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "fraction.h"

// Create a fraction with numerator=0 and denominator=1
Fraction::Fraction() : Fraction(0,1)
{
    // nohting to do here
}

// Create a fraction with numerator and denominator
Fraction::Fraction(int n, int d)
{
    _d=1;
    numerator(n);
    denominator(d);
}

// Copy constructor
Fraction::Fraction(const Fraction &other)
{
    _d=1;
    numerator(other.numerator());
    denominator(other.denominator());
}

// Destructor
Fraction::~Fraction()
{
    // blank virtual destructor
}

// Get the numerator
int Fraction::numerator() const
{
    return _n;
}

// Get the denominator
int Fraction::denominator() const
{
    return _d;
}

// Set the numerator
void Fraction::numerator(int n)
{
    _n = n;
    reduce();
}

// Set the denominator
void Fraction::denominator(int d)
{
    _d = d;
    reduce();
}

// Addition Operator
Fraction Fraction::operator+(const Fraction &rhs) const
{
    int n = numerator() * rhs.denominator();
    n += rhs.numerator() * denominator();
    int d = denominator() * rhs.denominator();
    return Fraction(n, d);
}

// Subtraction Operator
Fraction Fraction::operator-(const Fraction &rhs) const
{
    int n = numerator() * rhs.denominator();
    n -= rhs.numerator() * denominator();
    int d = denominator() * rhs.denominator();
    return Fraction(n, d);
}

// Multiplication Operator
Fraction Fraction::operator*(const Fraction &rhs) const
{
    int n = numerator() * rhs.numerator();
    int d = denominator() * rhs.denominator();
    return Fraction(n, d);
}

// Division Operator
Fraction Fraction::operator/(const Fraction &rhs) const
{
    int n = numerator() * rhs.denominator();
    int d = denominator() * rhs.numerator();
    return Fraction(n, d);
}

// Assignment Operator
Fraction& Fraction::operator=(const Fraction &rhs)
{
    numerator(rhs.numerator());
    denominator(rhs.denominator());
    return *this;
}

// reduce the fraction to lowest terms
void Fraction::reduce()
{
    // Find greatest common divisor
    int a = _n;
    int b = _d;
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }

    // Divide numerator and denominator by gcd
    _n /= a;
    _d /= a;
}

// Stream Insertion and Extraction Operators
std::ostream& operator<<(std::ostream &os, const Fraction &f)
{
    os << f.numerator() << "/" << f.denominator();
    return os;
}

std::istream& operator>>(std::istream &os, Fraction &f)
{
    int n, d;
    char sep;
    os >> n >> sep >> d;
    if (sep != '/')
    {
        os.setstate(std::ios::failbit);
        return os;
    }
    f.numerator(n);
    f.denominator(d);
    return os;
}