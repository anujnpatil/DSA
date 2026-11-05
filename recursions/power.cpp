#include <stdio.h>

int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m, n-1) * m;
    }
}

int pow1(int m, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return pow1(m*m, n/2);
    }
    else{
        return pow1(m*m, n/2) * m;
    }
}

int main(){
    printf("%d ", pow(2, 9));
    printf("%d", pow1(2, 9));
    return 0;
}