//Program author - Chintan Zaveri
//Program details -To add two dimensional array by using function
//*************************************************

#include<stdio.h>

void printarray(int* x,int size1,int size2)
{


    int i , j;
     for (i=0 ;i < size1; i++){
        for (j=0 ;j < size2 ; j++){
                printf("%d \t" , *x);
                x++;
        }
      printf("\n");
     }
      printf("\n"); printf("\n");
}


int main()
{
    int i , j = 0, temp =0  ;
    int a[3][3]= {5,3,8,9,2,1,4,7,6};
    int b[3][3]= {3,5,2,6,8,9,6,7,4};
    int c[3][3] ;

    for (i=0 ;i < 3; i++){
            for (j=0 ;j < 3; j++){
                c[i][j] = a[i][j] + b[i][j] ;
            }
        }

    printarray(&a[0][0],3,3);
    printarray(b,3,3);
    printarray(c,3,3);

return 0 ;
}

