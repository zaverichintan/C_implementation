//Program author - Chintan Zaveri
//Program details -To Calculate simple interest

#include<stdio.h>

int main()
{

    float pa, ri, ny, si;

    printf ("\n Enter Principal Amt.");
    scanf("%f", &pa);
    printf ("\n Enter rate of Interest");
    scanf("%f", &ri);
    printf ("\n Enter No. of Years");
    scanf("%f", &ny);

    // Calculate simple interest
    si = pa * ri * ny;

    printf ("\n Simple interest = %.2f", si);

}

