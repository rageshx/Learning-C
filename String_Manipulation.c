//This is a menu driven program which do various String manipulation without using Built-in Fuctions of Strings

#include<stdio.h>
#include<conio.h>

int length(char[]);
void concat(char[],char[]);
void comp(char[],char[]);
void rev(char[]);
void palindrome(char[]);

void main(){
    int ch;
    char a[30],b[30];
    printf("******************Menu*******************");
    printf("\n \t 1.Length of a String ");
    printf("\n \t 2.Concatenation of Two Strings ");
    printf("\n \t 3.Comparison of Two Strings");
    printf("\n \t 4.Reversing a String");
    printf("\n \t 5.Is the String Palindrome ");
    printf("\n \t 6.Exit");
    printf("\n****************************************");

    printf("\nEnter your choice :");

    scanf("%d",&ch);


    switch (ch)
    {
    case 1:
        printf("\n \t Length of a String ");
        printf("\n Enter a String : ");
        scanf("%s",a);
        printf("\n Length of the String is : %d ",length(a));
        break;
    case 2:
        printf("\n \t Concatenation of Two Strings ");
        printf("\n Enter String 1  : ");
        scanf("%s",a);
        printf("\n Enter String 2 : ");
        scanf("%s",b);
        concat(a,b);
        break;
    case 3:
        printf("\n \t Comparison of Two Strings");
        printf("\n Enter String 1  : ");
        scanf("%s",a);
        printf("\n Enter String 2 : ");
        scanf("%s",b);
        comp(a,b);
        break;
    case 4:
        printf("\n \t Reversing a String");
        printf("\n Enter a String : ");
        scanf("%s",a);
        rev(a);
        break;
    case 5:
        printf("\n \t Is the String Palindrome ");
        printf("\n Enter a String : ");
        scanf("%s",a);
        palindrome(a);
    
    case 6:
        printf("\n End of the program");
        break;

    default:
        printf("\n ***YOU HAVE ENTERED AN INVALID CHOICE***");
        break;
    }

}

int length(char str[])
{
    int i,size=0;
    for (i=0;str[i]!='\0';i++)
        size++;
    return size;
}

void concat(char str1[],char str2[])
{
    int i,j,size1,size2;
    size1=length(str1);
    size2=length(str2);

    for(i=size1,j=0;j<size2;i++,j++)
        str1[i]=str2[j];
    str1[i]='\0';
    printf("\n Concatenated String is : %s",str1);
}


void comp(char str1[],char str2[])
{
    int flag=0,i=0;
    if(length(str1)==length(str2))
    {
        while (str1[i]!='\0' &&str2[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("\n The Strings are same ");

        else
             printf("\n The Strings are not same ");
    }
    else
         printf("\n The Strings are not  same ");

}



void rev(char str[])
{
    int i,j,size;
    char reve[30];
    size=length(str);
    for(i=0;i<size;i++)
        reve[i]=str[size-i-1];
    reve[i]='\0';
    printf("\n The reversed string is %s ",reve);
}

void palindrome(char str[])
{
    int i,j,size,flag=0;
    char strrev[30];
    size=length(str);
     for(i=0;i<size;i++)
        strrev[i]=str[size-i-1];
    strrev[i]='\0';

    while(str[i]!='\0' && strrev!='\0')
    {
        if(str[i]==strrev[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%s is  a palindrome",str);
    else
         printf("%s is not a palindrome",str);
}
    


    