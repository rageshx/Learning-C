#include<stdio.h>



int main(){
    int row,col,rowsum=0,colsum=0,i,j,sum=0;
    int a[10][10];
    printf("Enter the number of Rows and columns : ");
    scanf("%d %d",&row,&col);
    //Getting inputs from the user  
    for(i=0;i<row;i++)
    {
        printf("Enter Row %d elements:",i+1);
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
        printf("\n");

    }

    
    //Displaying the Original Matrix
    for(i=0;i<row;i++)
    {
        
        for(j=0;j<col;j++)
            printf("%d \t",a[i][j]);
        printf("\n");

    }
    //Getting the row sums
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
            sum+=a[i][j];
            printf("\n Row %d sum: %d",i+1,sum);
        rowsum+=sum;
        printf("\n");
    }


    //Getting the Column sum

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
            sum+=a[j][i];
            printf("\n Column %d sum: %d",i+1,sum);
        colsum+=sum;
        printf("\n");
    }


    //Displaying the results

    printf("\n Total Row sum is equal to : %d ",rowsum);
    printf("\n Total Column sum is equal to  : %d ",colsum);

}



