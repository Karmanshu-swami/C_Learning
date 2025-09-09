// TO write the syntax of the pointer
#include<stdio.h>

int main(){
    int age = 25;
    int *ptr = &age;
    int _age = *ptr;

    printf("%p \n", ptr);
    return 0;
}