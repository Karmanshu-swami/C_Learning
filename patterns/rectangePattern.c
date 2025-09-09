/* Need to print the below pattern using nested loops

* * * * *
* * * * *
* * * * *
* * * * *

*/

#include<stdio.h>

int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 1; j <= 4; j++){
            printf("*");
        }
        printf("* \n");
    }
    return 0;
}

/*
    i=0 & j=1 to 4
    jjjji
    i=1 & j=1 to 4
    jjjji
    i=2 & j=1 to 4
    jjjji
    i=3 & j=1 to 4
    jjjji
    i=4 so condition drop
    return
*/