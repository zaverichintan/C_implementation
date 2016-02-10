//Program author - Chintan Zaveri
//Program details - Find Greatest common divisor 0f two positive integer

#include<stdio.h>

int main()
{
    int i, n1, n2, min, gcd, flag=0;
    // get numbers
    do{
         printf("\n Enter 1St. number :  ");
         scanf("%d", &n1);
      }
    while(n1 < 0);
    do{
        printf("\n Enter 2nd. number :  ");
        scanf("%d", &n2);
    }
    while(n2 < 0);

    // Get min. of two numbers
    if (n1 <= n2) min = n1; else min = n2;

    // loop for ith.  term
    for (i=2; i<=min; i++)
    {
        //  Find GCD of two numbers
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;
            flag = 1;
        }
    }

    if (flag == 1){
        printf ("\n GCD of %d and %d  is %d  ", n1, n2, gcd);

    }else{
        printf("\n GCD of %d and %d is not possible", n1, n2);
    }
}
