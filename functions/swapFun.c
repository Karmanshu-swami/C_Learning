// Write a function to swap the 2 variables
#include<stdio.h>

void swap(int a, int b);
void _swap(int *c, int *d);

int main(){
    int a = 5, b = 7;
    int c = 5, d = 7;
    printf("Initial value of a is %d and initial value of b is %d => Inside the main function \n", a, b);
    swap(a, b);
    printf("Initial value of a is %d and initial value of b is %d => Inside the main function after swapping \n\n\n", a, b);

    printf("Initial value of c is %d and initial value of d is %d => Inside the main function \n", c, d);
    _swap(&c, &d);
    printf("Final value of c is %d and Final value of d is %d => Inside the main function after _swapping \n", c, d);
    return 0;
}

// Using function call by value => Actual values will not change in this case
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Final value of a is %d and final value of b is %d => Inside the swap function \n", a, b);
}

// Using function call by reference => Actual values will change in this case
void _swap(int *c, int *d){
    int temp = *c;
    *c = *d;
    *d = temp;
    printf("Final value of c is %d and final value of d is %d => Inside the swap function \n", *c, *d);
}
