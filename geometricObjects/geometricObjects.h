#pragma once

class GeometricObject {
public:
    virtual double obsah() const = 0;
    virtual double obvod() const = 0;
    virtual ~GeometricObject() {}
};
