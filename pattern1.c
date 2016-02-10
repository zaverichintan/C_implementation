//Program author - Chintan Zaveri
//Program details -To print following pattern
/*
       1
      212
     32123
    4321234

*/
#include<stdio.h>

int main()
{
    int i , j = 0,k =0, num = 0;
    printf ("number of rows");
    scanf("%d",&num);

    for (i=0 ;i <= num; i++){
            for (j=num;j > i; j--){
            printf(" ");
            }
            for (j = i ; j  > 1 ; j--){
                    printf("%d" , j );
            }
            for (j = 1 ; j <= i ; j++){
                    printf("%d" , j );
            }
            printf("\n");
        }
return 0 ;
}

