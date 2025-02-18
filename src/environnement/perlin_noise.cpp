#include "perlin_noise.h"

double randomDouble(double a, double b) {
    double t {(double)(std::rand())/(double)RAND_MAX}; //random number between 0 and 1
    return a+(b-a)*t;
}

double smoothstep(double x) {
    if (x <= 0.0) return 0.0;
    else if (x >= 1.0) return 1.0;
    else return 3.0*x*x - 2.0*x*x*x;
}

Vector2D randomUnitVector() {
    double theta {randomDouble(0, 2*M_PI)};
    double x {cos(theta)};
    double y {sin(theta)};
    return Vector2D(x, y);
}