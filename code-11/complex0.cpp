#include "complex0.h"

complex complex::operator+(const complex &cx) const
{
    return complex(real_ + cx.real_, imag_ + cx.imag_);
}

complex complex::operator-(const complex &cx) const
{
    return complex(real_ - cx.real_, imag_ - cx.imag_);
}

complex complex::operator*(const complex &cx) const
{
    return complex(real_ * cx.real_ - imag_ * cx.imag_, real_ * cx.imag_ + imag_ * cx.real_);
}

complex complex::operator*(double multi) const
{
    return complex(multi * real_, multi * imag_);
}

complex complex::operator~() const
{
    return complex(real_, -imag_);
}

std::ostream &operator<<(std::ostream &os, const complex &cs)
{
    os << "(" << cs.real_ << "," << cs.imag_ << "i)" << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, complex &cs)
{
    std::cout << "real: ";
    is >> cs.real_;
    std::cout << "imaginary: ";
    is >> cs.imag_;
    return is;
}