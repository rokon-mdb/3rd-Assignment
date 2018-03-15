//find triangle or not by 3 angle
#include<stdio.h>

int main()

{
    float x, y, z;
    printf("Input first angle: ");
    scanf("%f", &x);
    printf("Input second angle: ");
    scanf("%f", &y);
    printf("Input third angle: ");
    scanf("%f", &z);
//checking condition with 180 degree angle
    if(x+y+z==180)
        printf("\nThe triangle is valid \n\n\n");
    else
        printf("\nThe triangle is not valid\n\n\n");


    return 0;
}
