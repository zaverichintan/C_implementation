//Program author - Chintan Zaveri
//Program details - Swap two numbers without using third variable.

#include<stdio.h>

int main()
{
    float n1, n2;

   printf ("\n Enter value for first number : ");
    scanf("%f", &n1);

   printf ("\n Enter value for second number : ");
    scanf("%f", &n2);

    // Swap above two numbers using math trick
    n2 = n1 + n2;
    n1 = n2- n1;
    n2 = n2 - n1;

    printf ("\n Swap values are ");

    printf ("\n Now first number is : %f ", n1);
    printf ("\n Now first number is : %f ", n2);

}

