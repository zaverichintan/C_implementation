#include <iostream>
using namespace std;
int main() {
    int n , b ;
    int ai ;

    vector<int> population ;

    cin>>n>>b;

    for (int io = 0 ; io< n ; io++){
        cin>>ai;
        population.push_back(ai);
    }//adding the population to the vector array

    //b should be divided into n parts (summing to b )
    // 7 = 1 + 6 ; 7 = 2 + 5 ..



    return 0;
}




#include <iostream>

using namespace std;
char chararray[] = 'I' , 'V' , 'X' , 'L' , 'C' , 'D' , 'M' ;
int intarray[] = 1 , 5 , 10 ,50 ,100 , 500 , 1000;


int indexfind (char fromstring) {
 for (int i = 0 ; i < 7 ; i++ ){

     if (chararray[i] == fromstring){
         return i;
        break ;
     }
 }


}


int main() {
    string input;
    cin>>input;
    int sum = 0 ;

        char fromstring =  input.at(0);
       int preindex =  indexfind (fromstring) ;
       int first = intarray[preindex];

    for (i = 1 ; i <input.size() ; i++){

       char fromstring =  input.at(i);
       int index =  indexfind (fromstring) ;
       int num = intarray[index];
       if (previndex<index){
           sum =  num ;

       }
        else
            sum = sum + num ;

    }



    cout<<input;
    return 0;
}






#include <iostream>
#include<stdio.h>
#include<string>
#include <cstring>
using namespace std;


void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}

void reversethewords(char *s)
{
    char *word_begin = NULL;
    char *temp = s;


    while( *temp )
    {

        if (( word_begin == NULL ) && (*temp != ' ') )
        {
            word_begin=temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    }


    reverse(s, temp-1);
}


int main() {
    string input;
    cin>>input;

    char chararray[1000] ;
    strcpy(chararray, input.c_str());

    reversethewords(chararray);
    printf("%s", chararray);

    return 0;
}


