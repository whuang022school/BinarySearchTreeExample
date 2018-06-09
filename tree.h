class Tree{
    private:
    int data;
    Tree * left;
    Tree * right;
    public:
    Tree();
    int get_data();
    Tree * get_left();
    Tree * get_right();
    void set_left(Tree  ptr);
    void set_right(Tree  ptr);
    void set_data(int data);
};
