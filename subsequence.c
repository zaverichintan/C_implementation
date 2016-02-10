//Program author - Chintan Zaveri
//Program details: To find Sub-sequence in the string.
*********************************************************

#include<stdio.h>
#include<string.h>

void isSubSequence(char str1[], char str2[])
{
   int j = 0 ,i; // For index of str1 (or subsequence

    int n = strlen(str1);
    int m = strlen(str2);
   /* Traverse str2 and str1, and compare current character
    of str2 with first unmatched char of str1, if matched
    then move ahead in str1 */
   for (i =0; i<n && j<m; i++)
       {
           if (str2[j] == str1[i]){
             j++;
            }
       }
       printf("%d",j);

   // If all characters of str1 were found in str2
   if  (j == m)
     printf("subsequence");
    else
    printf("not a subsequence");

}

int main()
{
    char str1[20] ,str2[20] ;
     printf("enter string 1");
     scanf("%s",str1);
     printf("enter string 2");
     scanf("%s",str2);

    isSubSequence(str1, str2);


    return 0;
}
