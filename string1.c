//Program author - Chintan Zaveri
//Program details -To concatenate two strings without string function

#include<stdio.h>
char strconcat(char s1[],char s2[]){

    int len1,len2,j,i;
    for(len1 = 0 ; s1[len1] != '\0';len1++);
    for(len2 = 0 ; s2[len2] != '\0';len2++);
    for ( i = len1, j = 0 ; i <len1+len2 ; i++ ,j++)
    {
        s1[i] = s2 [j];
    }
    s1[i] = '\0';
    printf("concatenated string - %s",s1);



}
int main(){
    char s1[20] ,s2[20];


    printf("enter first string - ");
    scanf("%s",s1);
    printf("enter second string - ");
    scanf("%s",s2);
    strconcat( s1,s2);
return 0 ;
}

