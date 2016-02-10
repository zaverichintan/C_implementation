//Program author - Chintan Zaveri
//Program details -To Calculate the Average of set of N numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, num;
    float numIn, avg, sum=0.0;

    printf ("\n Enter how many numbers to be average");
    scanf("%d", &num);

    // Get numbers for num times.

    for (i=0; i<num; i++)
    {
        printf ("\n Enter %d number : " i);
        scanf("%f", &numIn);

        // Calculate sum
        sum += numIn;
    }

     // Calculate Average
    avg =  sum / num;

    printf ("\n Average of %d number is = %.2f", num, avg);

    getch();

}

