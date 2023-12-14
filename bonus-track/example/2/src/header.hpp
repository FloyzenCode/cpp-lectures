#ifndef _HEADER_HPP_
#define _HEADER_HPP_
#include <iostream>

struct AreaRectangle
{
    double width;
    double height;

    double area(AreaRectangle &rect);
};

std::ostream &operator<<(std::ostream &os, const AreaRectangle &rect);
#endif
