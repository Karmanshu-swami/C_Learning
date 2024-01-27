#include<stdio.h>
#include<math.h>

int factorial(int num);

int main(){
    int num;
    printf("Please enter a num : ");
    scanf("%d", &num);
    int factorialValue = factorial(num);
    printf("The factorial value is : %d\n", factorialValue);
    return 0;
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num*factorial(num-1);
}