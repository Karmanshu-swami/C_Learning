// Write a common program that takes 2 ints and return the sum, product and the average of these 2 ints
#include<stdio.h>

void sumProdAvg(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 4;
    int b = 6;
    int sum, prod, avg;
    sumProdAvg(a, b, &sum, &prod, &avg);
    printf("Sum is %d, product is %d, and average is %d\n", sum, prod, avg);
    return 0;
}

void sumProdAvg(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b)/2;
}