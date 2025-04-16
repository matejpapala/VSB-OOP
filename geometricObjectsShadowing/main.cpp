#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "square.h"

using namespace std;

void demoGeometricObjects() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Square square(3.0);
    
    cout << "Circle: obsah = " << circle.obsah() << ", obvod = " << circle.obvod() << endl;
    cout << "Rectangle: obsah = " << rectangle.obsah() << ", obvod = " << rectangle.obvod() << endl;
    cout << "Ctverec: obsah = " << square.obsah() << ", obvod = " << square.obvod() << endl;
}

int main() {
    demoGeometricObjects();
    return 0;
}
