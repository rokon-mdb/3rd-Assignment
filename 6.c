//declare a year as a leap year or not a leap year

#include<stdio.h>
 int main()
 {
     int year;
     printf("Input year: ");
     scanf("%d", &year);

     if( year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("\n%d is a leap year.\n\n", year);
            else
                printf("\n%d is not a leap year.\n\n", year);
        }
        else
            printf("\n%d is a leap year.\n\n", year );
    }
    else
        printf("\n%d is not a leap year.\n\n", year);





     return 0;
 }
