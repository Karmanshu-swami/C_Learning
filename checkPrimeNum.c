// Check if a number is prime or not
#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(){
    int num;
    printf("Please enter the number : ");
    scanf("%d", &num);

    int result = isPrime(num);
    if(result == 1){
        printf("%d is a prime number!\n", num);
    }else{
        printf("%d is not a prime number!\n", num);
    }
    
    return 0;
}

int isPrime(int num){
    if(num < 2){
        return 0;
    }

    for(int i=2; i<sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }
    
    return 1;
}