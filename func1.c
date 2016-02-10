//Program author - Chintan Zaveri
//Program details -To find factorial using function
//*************************************************

#include<stdio.h>

int factorial(int);

int main() {
    int f;
     printf("enter number to find factorial");
     scanf("%d",&f);
     printf("%d" , factorial(f));
   return (0);
}
int factorial(int a ){

    int n = a  ;
    a=a-1;
    for (; a> 1 ; a--)
    {
        n = n * a ;
    }

  return  n;
}

