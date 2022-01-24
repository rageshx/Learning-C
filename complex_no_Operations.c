/*Program to read two complex numbers and perform various operations 
on them. Use of pointers to access the members of the structures */

#include<stdio.h>
int main()
{
    float areal,aimag,sreal,simag;
    float mreal,mimag,dreal,dimag;
    struct complex1
    {
        float real;
        float imag;
    };
    struct complex1 z1;
    struct complex2 *a=&z1;

    struct complex2
    {
        float real;
        float imag;
    };
    struct complex2 z2;
    struct complex2 *b=&z2;

    //Getting input from the user 
    printf("\n Enter the complex Z1 : ");
    scanf("%f %f",&z1.real,&z1.imag);

    printf("\n Enter the complex Z2 : ");
    scanf("%f %f",&z2.real,&z2.imag);

    //Dispaly the Complex numbers
    printf("\n Z1:%0.2f+%0.2fi",z1.real,z1.imag);
    printf("\n Z2:%0.2f+%0.2fi",z2.real,z2.imag);

    //Adding the numbers
    areal=a->real+b->real;
    aimag=a->imag+b->imag;
    printf(" \n Sum: %0.2f+%0.2fi",areal,aimag);

    //Subtracting the numbers
    sreal=a->real-b->real;
    simag=a->imag-b->imag;
    printf(" \n Difference : %0.2f+%0.2fi",sreal,simag);

    //Multiplying the numbers 
    mreal=(a->real*b->real)-(a->imag*b->imag);
    mimag=(a->real*b->imag)+(b->real*a->imag);
    printf(" \n Product : %0.2f+%0.2fi",mreal,mimag);

    //Dividing the numbers
    dreal=((a->real*b->real)+(a->imag*b->imag)/(b->real*b->real))+(b->imag*b->imag);
    dimag=((a->imag*b->imag)-(a->real*b->imag)/(b->real*b->real))+(b->imag*b->imag);
    printf(" \n Division  : %0.2f+%0.2fi",dreal,dimag);


}