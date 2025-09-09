#include<stdio.h>

int findLength(char str[]);

int main(){
    char str[50];
    fgets(str, 50, stdin);
    int count = findLength(str);
    printf("Length of string is %d\n", count);
    return 0;
}

int findLength(char str[]){
    int leng = 0;
    for(int i = 0; str[i] != '\0'; i++){
        leng++;
    }
    return leng-1;
}