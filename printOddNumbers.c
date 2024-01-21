// Print all the odd numbers from 5 to 50
# include <stdio.h>
#include<math.h>

int main(){
    // using for loop and positive conditions
    // for(int i = 5; i <= 50; i++){
    //     if(i%2 == 0){
    //         continue;
    //     }else{
    //        printf("%d \n", i);
    //     }
    // }

    // Trying with while loop
    int j = 5;
    while(j <= 50){
        if(j % 2 != 0){
            printf("%d \n", j);
        }
        j++;
    }
    return 0;
}