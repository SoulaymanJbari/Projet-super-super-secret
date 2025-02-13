#include"block.h"

Block::Block(){
    this-> id = 0;
    this -> transparent = true;
}

Block::Block(int id,bool transparent){
    this->id = id;
    this->transparent = transparent;
}

int Block::get_id(){
    return id;
}

bool Block::get_transparent(){
    return transparent;
}