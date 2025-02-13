#ifndef BLOCK_H
#define BLOCK_H

class Block {
    private:
        int id;
        bool transparent;
    public:
        int get_id();
        bool get_transparent();
        Block();
        Block(int id,bool transparent);

};



#endif