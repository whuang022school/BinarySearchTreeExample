
/**
*
* main file
* whuang022@gmail.com
* 
*/

#include<iostream>
#include<cstdio>
#include"tree.h"

int main(int argc,char *argv[]){

    Tree * t1=new Tree();
    t1->set_data(5);

    int f=t1->get_data();
    std::cout<<f<<"\n";

    Tree * c1=new Tree();
    c1->set_data(2);

    Tree * c2=new Tree(); 
    c2->set_data(3);
    

    t1->set_left( c1);
    t1->set_right( c2);

    std::cout<<"\nR get:"<< t1->get_right()->get_data();

    Tree * L=t1->get_left();
    std::cout<<"\nL get:"<< L->get_data()<<"\n";

    return 0;
}
