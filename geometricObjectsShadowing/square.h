#pragma once
#include "Rectangle.h"
#include <iostream>

class Square : public Rectangle {
private:
    double side;
public:
    Square(double side) : Rectangle(side, side) {this->side = side;}
    double obsah() { return side * side; }
    double obvod() {  return 4 * side; }
};
