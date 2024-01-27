// Write different functions to calculate the areas of different shapes
#include<stdio.h>
#include<math.h>

void areaSquare(float sideSq);
void areaRectangle(float l, float b);
void areaCircle(float sideCr);

int main(){
    float sideSq;
    printf("Please enter the side for ar of sq : ");
    scanf("%f", &sideSq);
    areaSquare(sideSq);
    float l;
    float b;
    printf("Please enter the length for ar of rec : ");
    scanf("%f", &l);
    printf("Please enter the breadth for ar of rec : ");
    scanf("%f", &b);
    areaRectangle(l, b);
    float sideCr;
    printf("Please enter the radius of the circle : ");
    scanf("%f", &sideCr);
    areaCircle(sideCr);
    return 0;
}

void areaSquare(float sideSq){
    printf("The area of the square is : %f\n", sideSq*sideSq);
}
void areaRectangle(float l, float b){
    printf("The area of the square is : %f\n", l*b);
}
void areaCircle(float sideCr){
    printf("The area of the circle is : %f\n", 3.14*sideCr*sideCr);
}