#ifndef PERLIN_NOISE_H
#define PERLIN_NOISE_H

#include <bits/stdc++.h>
#include <cmath>

class Vector2D {
private:
    double x;
    double y;
public:
    Vector2D();
    Vector2D(double x, double y);
    double getX();
    double getY();
};

Vector2D randomUnitVector();
double smoothstep(double x);
double randomDouble(double a, double b);

#endif /* PERLIN_NOISE_H */
