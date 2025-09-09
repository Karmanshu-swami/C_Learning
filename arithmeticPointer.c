// Just to check the arithmetic operations on the pointers
#include<stdio.h>

int main(){
    int age = 22;
    int age1 = 24;
    int *ptr = &age;
    int *ptr1 = &age1;

    if(ptr == ptr1){
        printf("True \n");
    }else{
        printf("False \n");
    }
    int newPtr = *ptr1 - *ptr;
    // int newPtr1 = ptr + ptr1;
    printf("%d\n", newPtr);
    return 0;
}