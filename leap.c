//Program To read a year from the user and check if the year is leap year or not (refer internet for the conditions of a leap year)
#include <stdio.h>
main()
{
    int y;

    printf("Enter year: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
    	
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);

    
}

/*
#include <stdio.h>

main() {
   int year;
   printf("Enter an year :");
   scanf("%d",year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);

   
}*/