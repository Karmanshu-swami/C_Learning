// This is to check if the marks of the student is more than 30 or not
#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("Please enter the marks :");
    scanf("%d", &marks);

    if(marks > 30){
        printf("Student passed \n");
    } else if(marks == 30){
        printf("Student passed but on line \n");
    } else{
        printf("Student failed \n");
    }
    return 0;
}