#include<stdio.h>

main()
{
    int i, j, N, col;

    /* Input number of columns from user */
    printf("Enter number of columns:");
    scanf("%d",&N);

    col=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            /* Increment number of columns per row for upper part */
            col++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            col--;
        }

        
        printf("\n");
    }

    
}