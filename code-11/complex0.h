#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex
{
private:
    double real_;
    double imag_;
public:
    complex() = default;
    complex(double real, double imag) : real_(real), imag_(imag) {}
    ~complex() = default;
    complex operator+(const complex &cx) const;
    complex operator-(const complex &cx) const;
    complex operator*(const complex &cx) const;
    complex operator*(double multi) const;
    complex operator~() const;
    friend complex operator*(double multi, const complex &cx) 
    {
        return cx * multi;
    }
    friend std::ostream &operator<<(std::ostream &os, const complex &cx);
    friend std::istream &operator>>(std::istream &is, complex &cx);
};

#endif