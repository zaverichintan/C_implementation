//Program author - Chintan Zaveri
//Program details -To find factorial using recursive function
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
int factorial(int n ){
if (n > 1)
    return  n * factorial (n-1) ;
else
    return 1;
}

