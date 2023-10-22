#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
}

Move Move::add(const Move &move) const
{
    return Move(x + move.x, y + move.y);
}

void Move::reset(double a, double b)
{
    x = a, y = b;
}

