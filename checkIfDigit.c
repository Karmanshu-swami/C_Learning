#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){
    char a;
    printf("Please enter the number : ");
    scanf("%c", &a);

    if(isdigit(a)){
        printf("%c is a digt \n", a);
    }else{
        printf("%c is not a digt \n", a);
    }
    return 0;
}