#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("Please enter the first number : ");
    scanf("%d", &a);
    printf("Please enter the second number : ");
    scanf("%d", &b);
    printf("Please enter the third number : ");
    scanf("%d", &c);
    float avg = (float)(a+b+c)/3;
    printf("The average of the numbers is %f \n", avg);
    return 0;
}