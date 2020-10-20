#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

namespace Shapes {

class Rectangle : public Shape {

private:

    const double length = 0;
    const double width = 0;

public:

    Rectangle();
    Rectangle(double l, double width);
    double area();

};


}

#endif // RECTANGLE_H_
