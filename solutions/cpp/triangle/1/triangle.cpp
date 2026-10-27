#include "triangle.h"
#include <stdexcept>

namespace triangle {
    triangle::triangle(double s1, double s2, double s3) : s1(s1), s2(s2), s3(s3) {}

    flavor kind(double s1, double s2, double s3) {
        if (s1 > s2 + s3 || s2 > s1 + s3 || s3 > s1 + s2 || s1 <= 0 || s2 <= 0 || s3 <= 0) {
            throw std::domain_error("");
        }
        triangle t = triangle(s1, s2, s3);
        if (t.s1 == t.s2 && t.s2 == t.s3) {
            return flavor::equilateral;
        } else if (t.s1 != t.s2 && t.s1 != t.s3 && t.s2 != t.s3) {
            return flavor::scalene;
        } else {
            return flavor::isosceles;
        }
    }
}
