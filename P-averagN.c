//Program author - Chintan Zaveri
//Program details -To Calculate the Average of set of N numbers.

#include<stdio.h>

int main()
{
    int i, num;   float numIn, avg, sum=0.0;

    printf ("\n Enter how many numbers to be average");
    scanf("%d", &num);

    // Get numbers for num times.
    for (i=0; i<num; i++){
        printf ("\n Enter %d number : ", i+1);
        scanf("%f", &numIn);
        sum += numIn; // Calculate sum
    }
// Calculate Average
    avg =  sum / num;
    printf ("\n Average of %d number is = %.2f", num, avg);
}
