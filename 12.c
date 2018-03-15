//finding 1 to 12 month duration in day
#include<stdio.h>

int main()
{
    int x;
    printf("Enter month number: ");
    scanf("%d", &x);
    if(x==1)
        printf("\nIt contains 31 days.\n\n");
    else if(x==2)
        printf("\nIt contains 28 days.\n\n");
    else if(x==3)
        printf("\nIt contains 31 days.\n\n");
    else if(x==4)
        printf("\nIt contains 30 days.\n\n");
    else if(x==5)
        printf("\nIt contains 31 days.\n\n");
    else if(x==6)
        printf("\nIt contains 30 days.\n\n");
    else if(x==7)
        printf("\nIt contains 31 days.\n\n");
    else if(x==8)
        printf("\nIt contains 31 days.\n\n");
    else if(x==9)
        printf("\nIt contains 30 days.\n\n");
    else if(x==10)
        printf("\nIt contains 31 days.\n\n");
    else if(x==11)
        printf("\nIt contains 30 days.\n\n");
    else if(x==12)
        printf("\nIt contains 31 days.\n\n");
    else
        printf("\nThe month number is not valid\n\n");


    return 0;
}
