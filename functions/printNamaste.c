// Write a function that prints namaste is user is indian or bonjour if user is french
#include <stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    char input;
    printf("Please enter your nationality - i or f ? : ");
    scanf("%c", &input);

    if (input == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
    return 0;
}

void printNamaste()
{
    printf("Namaste user from India! \n");
}

void printBonjour()
{
    printf("Hi user from France! \n");
}