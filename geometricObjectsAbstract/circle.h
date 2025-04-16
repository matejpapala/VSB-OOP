#pragma once
#include "geometricObjects.h"
#define PI 3.141592

class Circle : public GeometricObject {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double obsah() const override { return PI * radius * radius; }
    double obvod() const override { return 2 * PI * radius; }
};
