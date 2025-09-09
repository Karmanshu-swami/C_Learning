#include<stdio.h>
#include<string.h>

struct Student
{
    char name[50];
    float cgpa;
    int rollNo;
};

int main(){
    struct Student s1;
    strcpy(s1.name, "karmanshu");
    s1.rollNo = 43;
    s1.cgpa = 7.2;

    printf("Structure of the student %s\n", s1.name);
    return 0;
}