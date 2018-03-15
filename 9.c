//finding alphabet, digit and special character
#include<stdio.h>

int main()

{
    char x;
    printf("Input character: ");
    scanf("%c", &x);

    if((x>='a' && x<='z') || (x>='A' && x<='Z'))
        printf(" \n'%c' ia alphabet\n\n\n", x);
    else if (x>=48 && x<=57)
        printf(" \n'%c' is a digit\n\n\n", x);
    else
        printf("\n'%c' is a special character\n\n\n", x);


    return 0;
}
