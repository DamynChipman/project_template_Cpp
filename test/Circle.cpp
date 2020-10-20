#include "gtest/gtest.h"
#include "utils/Circle.h"
#include <iostream>
#include <cmath>

TEST(Circle, check_area) {
    double r = 1.0;
    Shapes::Circle c(r);
    std::cout << c.area() << std::endl;
    ASSERT_FLOAT_EQ(M_PI*r*r, c.area());
}
