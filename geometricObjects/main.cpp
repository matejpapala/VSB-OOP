#include <iostream>
#include "circle.h"
#include "rectangle.h"

using namespace std;

void demoGeometricObjects() {
    GeometricObject* objects[2];
    objects[0] = new Circle(5.0);
    objects[1] = new Rectangle(4.0, 6.0);
    for (int i = 0; i < 2; i++) {
        cout << objects[i]->obsah() << " " << objects[i]->obvod() << endl;
        delete objects[i];
    }
}

int main() {
    demoGeometricObjects();
    return 0;
}
