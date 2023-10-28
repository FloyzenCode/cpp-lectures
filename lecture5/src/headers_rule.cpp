#include "headers_rule.hpp"

Rectangle::Rectangle(int a, int b) : length(a), width(b) {}

Rectangle::~Rectangle() { std::cout << "Object deleted..." << std::endl; }

int Rectangle::area()
{ return length * width; }

int Rectangle::sum()
{ return (length + length) + (width + width); }
