//finding uppercase and lowercase alphabet.
#include <stdio.h>

int main()
{
    char x;

    printf("Enter a character: ");
    scanf("%c",&x);

    if(x>=64 && x<=90)
        printf("\n'%c' is uppercase alphabet.\n\n", x);
    else
        printf("\n'%c' is lowercase alphabet.\n\n", x);

       return 0;
}
