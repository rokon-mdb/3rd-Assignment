//declaring a number zero, positive or negative
#include<stdio.h>

int main()

{
    int x;
    printf("Input a number: ");
    scanf("%d", &x);

    if(x==0)
            printf("\nThe number is zero\n\n\n");
    else if(x>0)
        printf("\nThe number is positive\n\n\n");
    else
        printf("\nThe number is negative\n\n\n");




    return 0;

}
