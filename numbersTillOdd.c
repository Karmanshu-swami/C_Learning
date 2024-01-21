// Keep on taking the user input until it is an odd number
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    do
    {
        printf("Please enter the number : ");
        scanf("%d", &a);

        if(a%2 != 0){
            printf("Odd number \n");
            break;
        }
    } while (1);
    
    return 0;
}