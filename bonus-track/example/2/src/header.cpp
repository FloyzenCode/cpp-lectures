#include "header.hpp"

std::ostream &operator<<(std::ostream &os, const AreaRectangle &rect)
{
    os << "Height: " << rect.height
              << ", width: " << rect.width
              << std::endl;
    return os;
}

double AreaRectangle::area(AreaRectangle &rect)
{ return rect.width * rect.height; }
