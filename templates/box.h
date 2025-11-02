// Box template object
#include <iostream>

#ifndef BOX_H
#define BOX_H

// Fully implement the template in my .h file
template<typename T>
class Box
{
public:
    Box(const T &value) 
    {
        this->value = value;
    } 

    T get() const
    {
        return value;
    }

private:
    T value; // actual value being stored
};

template <typename T>
std::ostream& operator<<(std::ostream &os, const Box<T> &b)
{
    return os << b.get();
}

#endif