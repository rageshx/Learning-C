//Code by Ragesh
#include <stdio.h>
#include"numbersys.h"


int bin_to_oct(int n);


void main(){
    int num,a;
    printf("Enter the Binary Number : ");
    scanf("%d",&num);
    bin_to_oct (num);
    
}

int bin_to_oct(int n){
    int bin_num=0,oct_num=0,dec_num,base=1;
    bin_num=n;
    if (isBinary(n)==1){

      dec_num=bin_to_dec(n);
      while(dec_num!=0){
        oct_num=oct_num+(dec_num%8)*base;
        dec_num=dec_num/8;
        base=base*10;
      }

      printf("The Octal Equivalent of %d is %d",n,oct_num);
    }
    
    else
        printf(" ENTER A VALID BINARY NUMBER ");
}

//Code by Ragesh
