#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int a = 3;
    int b = 5;

    // Before we swap the variables
    printf("Without swapping a = %d and b = %d \n", a, b);

    // After we swap the variables
    swap(&a, &b);
    printf("After swapping a = %d and b = %d \n", a, b);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}