#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int cube = a*a*a;
    int cube1 = pow(a, 3);
    printf("The cube using multiply is %d \n", cube);
    printf("The cube using math pow function is %d \n", cube1);
    return 0;
}