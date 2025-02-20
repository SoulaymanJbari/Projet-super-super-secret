#include <iostream>
#include "block.h"
#include "map.h"
#include "perlin_noise.h"
int main() {
    std::cout<<"Wesh la rue ma gueule\n";
    Block terre = Block(1,false);
    Map map = Map();
    map.init_flat(terre);
    Perlin perlin = Perlin();
    perlin.grille_init();
    printf("L'id du block au sol est %d\n",map.get_id(1,1,0));
    printf("Les coordonées du premier vecteurs sont : %f , %f\n",perlin.get_grille(1,1).getX(),perlin.get_grille(1,1).getY());
    return 0;
}