//Program author - Chintan Zaveri
//Program details -Reverse the given number

#include<stdio.h>

int main()
{
   long int numIn, rem, revNum=0;

    printf ("\n Enter 7 digit +ve number : ");
    scanf("%ld", &numIn);

    while (numIn > 0)
    {

        rem = numIn % 10;// find remainder
        revNum = (revNum * 10) + rem;    // Reverse the num
        numIn /= 10; // eliminate the unit digit
    }
    printf ("\n Reverse of number is : %ld ", revNum);
}

