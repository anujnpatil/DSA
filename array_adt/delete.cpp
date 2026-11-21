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

int Delete(struct Array *arr, int index){
    int i, x = 0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
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
    Display(arr);

    int index;
    printf("\nIndex of that element which needs to be deleted: ");
    scanf("%d", &index);
    Delete(&arr, index);
    Display(arr);

    return 0;
}