// Print the sum of the first n numbers and also print them in reverse
#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    if (n > 0)
    {
        for (int i = n; i >= 0; i--)
        {
            sum = sum + i;
            printf("%d \n", i);
        };
        printf("The total sum is %d \n", sum);
    }
    else
    {
        printf("Please enter a natural number \n");
    }
    return 0;
}