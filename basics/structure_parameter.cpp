#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
    printf("Length: %d, Breadth: %d\n", p->length, p->breadth);
}

int main(){
    struct Rectangle r = {10, 5};
    fun(&r);
    printf("Length: %d, Breadth: %d\n", r.length, r.breadth);
    return 0;
}