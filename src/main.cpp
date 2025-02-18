#include <iostream>
#include "block.h"
#include "map.h"
int main() {
    std::cout<<"Wesh la rue ma gueule\n";
    Block terre = Block(1,false);
    Map map = Map();
    map.init_flat(terre);
    printf("L'id du block au sol est %d\n",map.get_id(1,1,0));
    return 0;
}