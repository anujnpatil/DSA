#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements are: \n");
    for (i=0; i<arr.length; i++){
        printf("%d ",arr.A[i]);
    }
};

void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

int LinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
};

int main(){
    struct Array arr;
    int n,i;
    printf("Enter size of array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size * sizeof(int));
    arr.length=0;

    printf("Enter number of numbers: ");
    scanf("%d", &n);

    printf("Enter all the Elements\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr.A[i]);
    }
    arr.length=n;

    int key;
    printf("Enter the value to be searched: ");
    scanf("%d", &key);
    printf("Element found at index %d \n", LinearSearch(&arr, key));
    Display(arr);
    return 0;
}