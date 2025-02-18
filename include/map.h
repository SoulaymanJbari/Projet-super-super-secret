#ifndef MAP_H
#define MAP_H

#include "block.h"

class Map {
    private:
        Block map[100][100][100];
    public:
        Map();
        Map(Block map[100][100][100]);
        void add_block(int x,int y, int z,Block block);
        void remove_block(int x, int y, int z);
        void init_flat(Block block);
        int get_id(int x, int y, int z);


};



#endif
