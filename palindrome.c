//Program to check whether a number is a palindrome or not
#include <stdio.h>
int main()
{
  int n,a,r = 0;

  printf("Enter a number : ");
  scanf("%d", &n);
  a=n;

  while (n!= 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  if (a==r)
    printf("%d is a palindrome.",a);

  else  
    printf("%d is not a palindrome.",a);


  
}