//Program author - Chintan Zaveri
//Program details -To find fibonacci series using recursive function
//*************************************************

#include<stdio.h>

int fibonacci(int);//declaration
int main()
{
   int n, c;
    printf("Enter number of terms in series \n");

   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 0 ; c <= (n-1) ; c++ ){
      printf("%d\n", fibonacci(c));
    }

   return 0;
}


int fibonacci(int n)
{
  if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibonacci(n-1) + fibonacci(n-2) );
}

