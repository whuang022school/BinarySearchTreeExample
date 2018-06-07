#ifdef TREE_H
#define TREE_H

class Tree{
    private:
    int data;
    Tree * left;
    Tree * right;
    public:
    int get_data();
    * Tree get_left();
    * Tree get_right();
    void set_left(const Tree * ptr);
    void set_right(const Tree * ptr);
    void set_data(int data);
}

#endif

