#include <stdio.h>

int sum(int n){
    if (n == 0){
        return 0;
    }
    else{
        return sum(n-1) + n;
    }
}

int Isum(int n){
    int s=0;
    int i;
    for(i=1;i<=n;i++){
        s=s + i;
    }
    return s;
}

int main(){
    printf("%d", sum(5));
    printf("\n%d", Isum(5));
    return 0;
}