// Calculate the sum of all the numbers from 5 to 50 (including 5 & 50)
#include<stdio.h>
#include<math.h>

int main(){
    int sum = 0;
    for(int i=5; i<=50; i++){
        sum += i;
    }
    printf("The total sum is %d \n", sum);
}