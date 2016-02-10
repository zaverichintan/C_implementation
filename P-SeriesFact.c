//Program author - Chintan Zaveri
//Program details - Find sum of nth. series (1/1! + 2/2! + 3/3! +..... n/n!)

#include<stdio.h>

int main()
{
    int i, j, nT; long int fact; double sum = 0.0,  tmp = 0.0;    // initialize values

   printf("\n Enter nth. term : ");
   scanf("%d", &nT);

    // loop for ith.  term
    for (i=1; i<=nT; i++){
        fact = 1;   // Must init fact before calculation
        // calculate factorial of ith. term
        for (j=1; j<i; j++){
            fact *= i;
        }
        // Calc ith. term
        tmp = i / (double) fact;

        // calc  sum of nth. term
        sum += tmp;
    }


    printf ("\n Sum of series is : %lf ", sum);

}

