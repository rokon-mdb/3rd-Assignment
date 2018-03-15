//finding alphabet or not
#include<stdio.h>

int main()
{
    char x;
    printf("Input character: ");
    scanf("%c", &x);

    if((x>='a' && x<='z') || (x>='A' && x<='Z'))
        printf(" \n'%c' ia alphabet\n\n\n", x);
    else
        printf(" \n'%c' in not a alphabet\n\n\n", x);




    return 0;
}
