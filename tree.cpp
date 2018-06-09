#include<iostream>
#include<cstdio>
#include"tree.h"

Tree::Tree(){
    this->data=0;
    this->left=NULL;
    this->right=NULL;//
}
void Tree::set_data(int data){
    this->data=data;
}

int Tree::get_data(){
    return this->data;
}
void Tree::set_left(Tree  ptr){
    this->left=&ptr;
}

