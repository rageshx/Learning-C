#include <stdio.h>


int bin_to_dec(int n);
int isBinary (int n);

void main(){
    int num,a;
    printf("Enter the Binary Number : ");
    scanf("%d",&num);
    bin_to_dec(num);
}

int isBinary (int n) {
  int x;
  while (n) { 
    x = n % 10; 
    if (x * x != x) 
      return 0; 
    n /= 10; 
  } 
  return 1; 
} 

int bin_to_dec(int n){
    int bin_num=0,dec_num=0,base=1,temp;
    bin_num=n;
    if (isBinary(n)==1){
        while ( n > 0)  
        {  
            temp = n % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
            dec_num = dec_num + temp * base;  
            n = n / 10; // divide the number with quotient  
            base = base * 2;  
        }  
        printf("The decimal equivalent of %d is %d",bin_num,dec_num);
    }
    
    else
        printf("ENTER A VALID BINARY NUMBER ");
}