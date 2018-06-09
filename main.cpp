
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
    std::cout<<"Hello"; 
    Tree *t1=new Tree();
    t1->set_data(5);
    int f=t1->get_data();
    std::cout<<f<<"\n";
    return 0;
}
