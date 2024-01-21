#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    printf("Please enter the first number : ");
    scanf("%d", &a);
    printf("Please enter the second number : ");
    scanf("%d", &b);

    // check the smaller number among 2
    if(a<b){
        printf("a is smaller than b \n");
    }else{
        printf("b is smaller than a \n");
    }
    return 0;
}