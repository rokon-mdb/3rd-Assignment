//finding the name of a day in a week
#include<stdio.h>

int main()
{
    int x;
    printf("Input week number: ");
    scanf("%d", &x);
    if(x==1)
        printf("\nSaturday\n\n");
    else if(x==2)
        printf("\nSunday\n\n");
    else if(x==3)
        printf("\nMonday\n\n");
    else if(x==4)
        printf("\nTuesday\n\n");
    else if(x==5)
        printf("\nWednesday\n\n");
    else if(x==6)
        printf("\nThusday\n\n");
    else if(x==7)
        printf("\nFriday\n\n");
    else
        printf("\nThe week number is not valid\n\n");


    return 0;
}
