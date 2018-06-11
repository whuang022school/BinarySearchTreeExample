class Tree{
    private:
    int data;
    Tree * left;
    Tree * right;
    Tree * r;
    public:
    Tree();
    int get_data();
    Tree * get_left();
    Tree * get_right();
    void set_left( Tree * & ptr_L);
    void set_right(Tree * & ptr_R);
    void set_data(int);
};
