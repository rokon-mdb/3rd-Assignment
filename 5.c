//declare a number as Even or Odd
#include<stdio.h>

int main()

{
    int x;
    printf("Input a number: ");
    scanf("%d", &x);

    if(x%2==0)
        printf("\nThe number is Even\n\n\n");
    else
        printf("\nThe number is Odd\n\n\n");


    return 0;

}
