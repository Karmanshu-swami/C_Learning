// Take the input from the user to find the factorial of that number
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    printf("Final factorial is %d \n", fact);

    return 0;
}