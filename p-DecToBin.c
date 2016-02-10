//Program author - Chintan Zaveri
//Program details -Converts Decimal number to binary using recursion

#include<stdio.h>
#include<conio.h>

void ToBin(int);

int main()
{
   int num;

   // clrscr();

   scanf("\n Enter decimal number %d", &num);

   printf("Binary number is");

   // Call to binary conversion
   ToBin(num);

return 0 ;
}


void ToBin(int dNum)
{
    int rem;

    if (dNum != 0)
    {
        rem = dNum % 2;

        dNum /= 2;

        printf("%d", rem);

        ToBin(dNum);

    }
}

