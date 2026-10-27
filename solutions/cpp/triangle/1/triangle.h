#pragma once

namespace triangle {
    enum flavor {
        equilateral,
        isosceles,
        scalene
    };
    struct triangle {
        double s1, s2, s3;
        triangle(double s1, double s2, double s3);
    };
    flavor kind(double s1, double s2, double s3);
}
