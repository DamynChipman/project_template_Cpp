#include "utils/Circle.h"
#include <cmath>

namespace Shapes {

Circle::Circle() {}
Circle::Circle(double r) : radius(r) {}
double Circle::area() {return M_PI*pow(radius,2);}

}
