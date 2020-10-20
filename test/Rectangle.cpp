#include "gtest/gtest.h"
#include "utils/Rectangle.h"

TEST(Rectangle, check_area) {
    double w = 1.0;
    double l = 2.0;
    Shapes::Rectangle r(w, l);
    ASSERT_FLOAT_EQ(w * l, r.area());
}

TEST(Rectangle, check_area_wrong) {
    double w = 1.0;
    double l = 2.0;
    Shapes::Rectangle r(w, l);
    ASSERT_NE(w * l * 2, r.area());
}
