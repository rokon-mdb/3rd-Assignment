//declaring a triangle as equilateral or isosceles or scalene by checking sides
#include<stdio.h>

int main()

{
    int x, y, z;
    printf("Input first side: ");
    scanf("%d", &x);
    printf("Input second side: ");
    scanf("%d", &y);
    printf("Input third side: ");
    scanf("%d", &z);

    if(x==y && y==z && z==x)
        printf("\nTriangle is equilateral triangle\n\n\n");
    else if(x==y || y==z || z==x)
        printf("\nTriangle is isosceles triangle\n\n\n");
    else
        printf("\nTriangle is scalene triangle\n\n\n");


    return 0;
}
