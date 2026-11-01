#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle *p;
    p = (struct Rectangle *) malloc (sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 5;
    cout<<p->breadth<<endl;
    free(p);
    return 0;
}