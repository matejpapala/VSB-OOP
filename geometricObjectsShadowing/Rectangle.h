#pragma once
#include "GeometricObject.h"

class Rectangle : public GeometricObject {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double obsah() { return width * height; }
    double obvod() { return 2 * (width + height); }
};
