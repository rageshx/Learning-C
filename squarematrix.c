#include <stdio.h>
void  main(){
    int ord,flag=0,i,j;
    int a[10][10];
    printf("\n Enter the order: ");
    scanf("%d",&ord);

    printf("\n Enter Element : ");
    for(i=0;i<ord;i++)
    {
        printf("\n Row %d :",i+1);
        for(j=0;j<ord;j++)
            scanf("%d",&a[i][j]);
    }

    printf("\n Original Matrix : \n");
    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++)
            printf("%d \t",a[i][j]);
        printf("\n");   
    }

    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++){
            if(a[i][j]!=a[j][i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        printf("Symmetrix matrix");

    else
        printf("Not a Symmetrix matrix ");

}