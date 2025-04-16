#pragma once
#include "GeometricObject.h"

class Circle : public GeometricObject {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double obsah() { return 3.14159265358979323846 * radius * radius; }
    double obvod() { return 2 * 3.14159265358979323846 * radius; }
};
