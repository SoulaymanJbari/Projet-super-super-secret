#include "perlin_noise.h"

Vector2D::Vector2D(){
    this->x=0;
    this->y=0;
}
Vector2D::Vector2D(double x, double y){
    this->x=x;
    this->y=y;
}
double Vector2D::getX(){
    return this->x;
}
double Vector2D::getY(){
    return this->y;
}

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

Perlin::Perlin(){
    for (int i=0;i<11;i++){
        for (int j=0;j<11;j++){
            this->grille[i][j] = Vector2D(0,0);
        }
    }
}

void Perlin::grille_init(){
    for (int i=0;i<11;i++){
        for (int j=0;j<11;j++){
            this->grille[i][j] = randomUnitVector();
        }
    }
}

Vector2D Perlin::get_grille(int x,int y){
    return this->grille[x][y];
}