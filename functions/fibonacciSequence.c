// Write a function to take the number from the user and write the fibonacci sequence for that number
#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Please enter the number n : ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
    }
    int fibN1 = fibonacci(n - 1);
    int fibN2 = fibonacci(n - 2);
    int fibN = fibN1 + fibN2;
    printf("The fibonacci for the number %d is : %d \n", n, fibN);
    return fibN;
}

// Fibonacci for 7 is
// 0, 1, 1, 2, 3, 5, 8, 13
// n = (n-1) + (n-2)
// => 13 = 8 + 5
// => 8 = 5 + 3
// => 5 = 3 + 2
// => 3 = 2 + 1
