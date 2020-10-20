#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"

namespace Shapes {

class Circle : public Shape {

private:

    const double radius = 0;

public:

    Circle();
    Circle(double r);
    double area();

};


}

#endif // CIRCLE_H_
