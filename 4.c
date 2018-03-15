//if a integer number is divisible by 5&11 or not
#include<stdio.h>

int main()

{
    int x;
    printf("Input a number: ");
    scanf("%d", &x);
    if(x%5==0 && x%11==0)
        printf("Number is divisible by 5 and 11\n\n\n");
    else
        printf("Number is not divisible by 5 and 11\n\n\n");


    return 0;

}
