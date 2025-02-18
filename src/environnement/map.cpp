#include "map.h"

Map::Map(){
    Block vide = Block(0,true);
    for (int x=0;x<100;x++){
        for (int y=0;y<100;y++){
            for (int z=0;z<100;z++){
                this->map[x][y][z] = Block(vide);
            }
        }
    }
}

Map::Map(Block map[100][100][100]){
    for (int x=0;x<100;x++){
        for (int y=0;y<100;y++){
            for (int z=0;z<100;z++){
                this->map[x][y][z] = map[x][y][z];
            }
        }
    }
}
void Map::add_block(int x, int y, int z, Block block){
    this->map[x][y][z] = block;
}

void Map::remove_block(int x, int y, int z){
    this->map[x][y][z]=Block(0,true);
}

void Map::init_flat(Block block){
    for (int x=0;x<100;x++){
        for (int y=0;y<100;y++){
            this->map[x][y][0]=Block(block);
        }
    }
}
int Map::get_id(int x, int y, int z){
    int res = this->map[x][y][z].get_id();
    return res;
}