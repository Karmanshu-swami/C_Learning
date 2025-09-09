// Calculte the count of the odd numbers in the array
#include<stdio.h>

int main(){
    int arr[] = {3, 4, 5, 6, 7, 8, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2 != 0)
        {
            oddCount++;
        }
        
    }
    
    printf("Number of odd numbers in the array %d\n", oddCount);
    return 0;
}