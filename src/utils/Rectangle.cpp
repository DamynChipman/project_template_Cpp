#include "utils/Rectangle.h"

namespace Shapes {

Rectangle::Rectangle() {}
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}
double Rectangle::area() {return length * width;}


}
