#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    printf("Please enter the side a : ");
    scanf("%d", &a);
    printf("Please enter the side b : ");
    scanf("%d", &b);
    int perimeter = 2 * (a + b);
    printf("The perimeter of the rectangle is %d \n", perimeter);
    return 0;
}