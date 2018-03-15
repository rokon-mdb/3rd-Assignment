//finding vowel or consonant
//using both uppercase and lowercase
#include<stdio.h>

int main()
{
    char z, a, e, i, o, u, A, E, I, O, U;
    printf("Input a character: ");
    scanf("%c", &z);

    if( z==a || z==e || z==i || z==o || z==u || z==A || z==E || z==I || z==O || z==U)
        printf("\n '%c' is a vowel\n\n\n", z);
    else
        printf("\n '%c' is a consonant \n\n\n", z);


    return 0;

}
