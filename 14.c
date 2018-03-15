//find valid triangle or not
#include<stdio.h>

int main()

{
    float x, y, z;
    printf("Input first side: ");
    scanf("%f", &x);
    printf("Input second side: ");
    scanf("%f", &y);
    printf("Input third side: ");
    scanf("%f", z);
//checking condition for triangle
    if(x+y>z || x+z>y || y+z>x)
        printf("\nTriangle is valid\n\n\n");
    else
        printf("\nTriangle is not valid\n\n\n");



    return 0;
}
