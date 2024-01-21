// This program is to give the grades to a student on the basis of marks
#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("Please enter the marks [0-100] : ");
    scanf("%d", &marks);

    if(marks >= 0 && marks < 30){
        printf("Grade assigned C \n");
    } else if(marks >= 30 && marks < 70){
        printf("Grade assigned B \n");
    } else if(marks >= 70 && marks <90){
        printf("Grade assigned A \n");
    } else if(marks >= 90 && marks <= 100){
        printf("Grade assigned A+ \n");
    } else{
        printf("Please enter a valid marks \n");
    }
    return 0;
}