// q1 Check if a number is divisible by 2 or not

#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Please enter the number : ");
    scanf("%d", &a);
    if (a%2 == 0)
    {
        printf("The number %d is divisible by 2\n", a);
    }
    else
    {
        printf("The number %d is not divisible by 2\n", a);
    }
    return 0;
};