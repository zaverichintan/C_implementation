//Program author - Chintan Zaveri
//Program details -To print following pattern
/*
       1
      121
     12321
    1234321
     12321
      121
       1

*/
#include<stdio.h>

int main()
{
    int i , j = 0,k =0 ,num = 0;
    printf ("number of rows");
    scanf("%d",&num);
    for (i=0 ;i <= num; i++){
            for (j=num;j > i; j--){
            printf(" ");
            }
            for (j = 1 ; j < i ; j++){
                    printf("%d" , j );
            }
            for (j = i ; j >= 1 ; j--){
                    printf("%d" , j );
            }
            printf("\n");
        }
          for (i=(num-1) ;i > 0; i--){
            for (j=0;j <=((num-1)-i); j++){
            printf(" ");
            }
            for (j = 1 ; j < i ; j++){
                    printf("%d" , j );
            }
            for (j = i ; j >= 1 ; j--){
                    printf("%d" , j );
            }
            printf("\n");
        }
return 0 ;
}

