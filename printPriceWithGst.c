// Program will take the price of 3 items and will print the final price with gst
#include<stdio.h>

int main(){
    float price[3];
    printf("Enter the first price : ");
    scanf("%f", &price[0]);
    printf("Enter the second price : ");
    scanf("%f", &price[1]);
    printf("Enter the third price : ");
    scanf("%f", &price[2]);

    float finalPrice = price[0] + price[1] + price[2];
    float finalWithGst = finalPrice + (0.18 * finalPrice);
    printf("The final price is %f and the final price with gst is : %f\n", finalPrice, finalWithGst);
    return 0;
}