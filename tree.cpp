#include<iostream>
#include<cstdio>
#include"tree.h"

Tree::Tree(){
    data=0;
    this->left=NULL;
    this->right=NULL;
}
void Tree::set_data(int dataw){
    data=dataw;
}

int Tree::get_data(){
    return data;
}

void Tree::set_left( Tree * & ptr_L){
    left =  ptr_L;
}

Tree *  Tree::get_left(){
    return left;
}

void Tree::set_right(Tree * & ptr_R){
    right=  ptr_R;
}

Tree * Tree::get_right(){
   return right;
  
}
