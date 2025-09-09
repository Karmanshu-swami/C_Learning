// given an array print all the numbers of that array
#include<stdio.h>

// Using the arr[] square bracket method
void printNums(int arr[], int n);
// Using the pointer method
void _printNums(int *ptr, int n);

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printNums(arr, 5);
    _printNums(arr, 5);
    return 0;
}

void printNums(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void _printNums(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("%d \t", ptr[i]);
    }
    printf("\n");
}