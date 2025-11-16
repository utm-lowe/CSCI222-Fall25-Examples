/**
 * @file fraction.h
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief A simple fraction object.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

class Fraction
{
public:
    // Create a fraction with numerator=0 and denominator=1
    Fraction();

    // Create a fraction with numerator and denominator
    Fraction(int n, int d);

    // Copy constructor
    Fraction(const Fraction &other);

    // Destructor
    virtual ~Fraction();

    // Get the numerator
    virtual int numerator() const;

    // Get the denominator
    virtual int denominator() const;

    // Set the numerator
    virtual void numerator(int n);

    // Set the denominator
    virtual void denominator(int d);

    // Addition Operator
    virtual Fraction operator+(const Fraction &rhs) const;

    // Subtraction Operator
    virtual Fraction operator-(const Fraction &rhs) const;

    // Multiplication Operator
    virtual Fraction operator*(const Fraction &rhs) const;

    // Division Operator
    virtual Fraction operator/(const Fraction &rhs) const;

    // Assignment Operator
    virtual Fraction& operator=(const Fraction &rhs);

protected:
    // reduce the fraction to lowest terms
    virtual void reduce();

private:
    int _n;
    int _d;
};

// Stream Insertion and Extraction Operators
std::ostream& operator<<(std::ostream &os, const Fraction &f);
std::istream& operator>>(std::istream &os, Fraction &f);

#endif