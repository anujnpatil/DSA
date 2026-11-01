#include <iostream>

using namespace std;

int main(){
    int A[10] = {10, 20, 30, 40, 50};

    cout<<sizeof(A)<<endl;
    cout<<A[9]<<endl;

    for (int i=0; i<10; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}