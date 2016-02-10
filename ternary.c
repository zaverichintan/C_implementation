//Program author - Chintan Zaveri
//Program details -To find maximum number out of 3 using ternary operator
//*************************************************

#include<stdio.h>

int main(){
    int a ,b , c ;
       printf ("number1 ");
    scanf("%d",&a);
       printf ("number2 ");
    scanf("%d",&b);
       printf ("number3 ");
    scanf("%d",&c);

    printf("%d",((a>b)?((a>c)?a:c) : (b>c)?b:c ));

return 0 ;
}

