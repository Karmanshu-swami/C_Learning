#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    // Printing the normal table for the input n
    for(int i =1; i <= 10; i++){
        // int product = a * i;
        printf("%d * %d = %d \n", a, i, (a * i));
    }

    // Printing the reverse table for the same input n
    for(int i=10; i>0; i--){
        printf("%d * %d = %d \n", a, i, (a*i));
    }
    return 0;
}