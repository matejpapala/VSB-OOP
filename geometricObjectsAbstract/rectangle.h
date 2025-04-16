#pragma once
#include "geometricObjects.h"

class Rectangle : public GeometricObject {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double obsah() const override { return width * height; }
    double obvod() const override { return 2 * (width + height); }
};
