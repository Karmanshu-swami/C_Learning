// Count the odd numbers in an array
#include<stdio.h>

int main(){
    int arr[] = {1, 3, 4, 6, 5, 7, 18, 19, 22, 24, 25, 98, 87};
    int count = 0;
    for(int i=0; i<13; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    printf("Total count of odd numbers is : %d\n", count);
    return 0;
}