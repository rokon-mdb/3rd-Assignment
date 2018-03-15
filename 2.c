//finding a maximum number from 3 integer number
#include<stdio.h>

int main()

{
    int x, y, z, max;
    printf("Input 1st number:");
    scanf("%d", &x);
    printf("Input 2nd number:");
    scanf("%d", &y);
    printf("Input 3rd number:");
    scanf("%d", &z);

    max=x;
    if(max<y)
        max=y;
    if(max<z)
        max=z;
        printf("Maximum number is %d \n\n", max);


    return 0;
}
