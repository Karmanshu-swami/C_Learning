// Keep on taking the input from the user until is it not a multiple of 7
#include<stdio.h>
#include<math.h>

int main(){
    int a;

    do{
        printf("Please enter the number : ");
        scanf("%d", &a);
        printf("%d \n", a);

        if(a%7 == 0){
            printf("%d is the multiple of 7 \n", a);
            break;
        }
    }while(1);
    printf("Thank you! \n");
    return 0;
}