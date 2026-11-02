#include <iostream>
#include <stdio.h>
using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int result = add(5, 3);
    cout << "The sum is: " << result << endl;
    return 0;
}