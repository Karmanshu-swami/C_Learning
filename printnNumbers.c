// Print the n numbers using all the three loops and take the n from the user
#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number : ");
    scanf("%d", &n);

    // Using the for loop
    for(int i = 1; i <= n; i++){
        printf("%d \n", i);
    }

    // Using the while loop
    int i = 1;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }

    // Using the do-while loop
    int j = 1;
    do{
        printf("%d \n", j);
        j++;
    }while(j <= n);

    return 0;
}