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

int BinarySearch(struct Array arr, int key){
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
};

int RecursiveBinarySearch(int a[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if (key==a[mid]){
            return mid;
        }
        else if (key<a[mid]){
            return RecursiveBinarySearch(a, l, mid-1, key);
        }
        else{
            return RecursiveBinarySearch(a, mid+1, h, key);
        }
    }
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

    int key;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);
    printf("Element found at index %d \n", BinarySearch(arr, key));
    printf("Element found at index %d", RecursiveBinarySearch(arr.A, 0,arr.length ,key));

    return 0;
}