// Reverse an array
#include<stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf(arr);
    
    for(int i=4; i>=0; i--){
        int temp;
        if(arr[i] > arr[i-1]){
            temp = arr[i];
            arr[i-1] = arr[i];
            arr[i] = temp;
        }
    }
    printf(arr);
    return 0;
}