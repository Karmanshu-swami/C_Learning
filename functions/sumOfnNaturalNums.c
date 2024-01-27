// Write a function to find the sum of the first n natural numbers
#include<stdio.h>

int naturalSum(int n);

int main(){
    int n;
    printf("Please enter the number : ");
    scanf("%d", &n);
    int ans = naturalSum(n);
    printf("The sum is : %d\n", ans);
    return 0;
}

int naturalSum(int n){
    if(n == 1){
        return 1;
    }
    return n + naturalSum(n-1);
}