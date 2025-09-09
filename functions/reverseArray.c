#include<stdio.h>

void reversed(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Before reversing the array \t");
    printArr(arr, 6);
    reversed(arr, 6);
    printf("After reversing the array \t");
    printArr(arr, 6);
    return 0;
}

void reversed(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int firstValue = arr[i];
        int secValue = arr[n - i - 1];
        arr[i] = secValue;
        arr[n - i -1] = firstValue;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}