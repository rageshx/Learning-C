#include <stdio.h>
#include <conio.h>

int det(int a[30][30], int n);

int main()
{
    int a[30][30];
    int i,j,k,n,res;
    printf("Enter the order of the matrix: \n");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix one by one: \n");
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    res = det(a,n);
    printf("\n The Determinant of the given matrix is %d",res);
}
int det(int a[30][30], int n)
{
    int Min[30][30];
    int i,j,k,c1,c2;
    int dtr;
    int c[100];
    int f=1;

    if(n == 2)
    {
        dtr = 0;
        dtr = a[0][0]*a[1][1]-a[0][1]*a[1][0];
        return dtr;
    }
    else
    {
        for(i = 0 ; i < n ; i++)
        {
            c1 = 0, c2 = 0;
            for(j = 0 ; j < n ; j++)
            {
                for(k = 0 ; k < n ; k++)
                {
                    if(j != 0 && k != i)
                    {
                        Min[c1][c2] = a[j][k];
                        c2++;
                        if(c2>n-2)
                        {
                            c1++;
                            c2=0;
                        }
                    }
                }
            }
            dtr = dtr+f*(a[0][i]*det(Min,n-1));
            f=-1*f;
        }
    }
    return dtr;
}