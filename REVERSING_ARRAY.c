#include <stdio.h>

int main()
{
    int n,temp,end,i,j;
    int a[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");   
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    //Middle element
    if(n%2==0){
        end=n/2;
    }
    else{
        end=(n+1)/2;
    }

    //reverse the array
    for(i=0;i<end;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    //display
    printf("\nThe reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}