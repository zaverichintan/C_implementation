//to find permutation of a number
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
using namespace std ;

struct stack_in_array{
    int num;
    struct stack_in_array *next;
};
struct stack_in_array *first = (struct stack_in_array *) malloc( sizeof(struct stack_in_array) );
struct stack_in_array *head = first ;


bool traverse_linklist(int a){
head = first;

  bool retFL = false ;
  while(head->next != NULL){
    if(head->num == a)
    {
        retFL = true;
        break;
    }else
    head = head->next;
  }
return retFL;
}

void store_to_linklist(int a){


if(traverse_linklist(a) == false){

head->num = a ;
struct stack_in_array *newnode = (struct stack_in_array *) malloc( sizeof(struct stack_in_array) );
head->next = newnode;
head=head->next;
head->next = NULL;//for security
}

}

int i ;
int array_a[20];
int counter_array[20];

int num_to_array(int a){

int b = a ;
int counter =0;

    while(b!=0)
    {
    array_a[counter] = b % 10 ;
    counter++ ;

    b = b /10 ;
    }
    return counter ;

}

bool isAnyIndexSame(int digit){
bool retFL = true ;
int i , j;
    for(i = 0 ; i <digit ; i++){
        for (j = 0 ; j < digit ; j++){
                if (i == j){continue;}
            if (counter_array[i] == counter_array[j])
            {
                retFL = false ;
                break;
            }
        }
    }
return retFL;
}
void print_link_list(){
    head = first ;
    while(head->next != NULL){
        cout<<head->num<<endl;
        head = head->next;
    }


}
void print_elements(int digit){
int i = 0;
int num = 0 ;
    while(i != digit){
        num *= 10 ;
        num = num + array_a[counter_array[i]];

        i++;

    }
    store_to_linklist(num);
}

void logic(int digit){

bool retFL = true ;
int loopcount = 0 ;
while(counter_array[0] != digit){

    for (i = 0 ; i <=(digit-1) ; i++){
        retFL = isAnyIndexSame(digit) ;

        if (retFL == true  ){
            loopcount++;
            print_elements(digit);
        }
        counter_array[digit-1]++;
    }

    for (i = 0 ; i< digit ; i++){
        if(counter_array[digit-i]==digit){
            counter_array[digit-i-1]++;  counter_array[digit-i]=0;
        }
    }
    if(counter_array[0] == digit) break;
}
}

int main(){

int a , i ;
int digit;
first->next = NULL ;//to start the process

// for initialization to 0
for( i = 0 ; i < 20 ; i++){
    counter_array[i] = 0;
}
cout<<"enter a number";
cin>>a;

digit = num_to_array(a);
//for (int i = 0 ; i < digit;i++){
//   logic(digit-i);
//}
logic(digit);
print_link_list();
cin>>i;
return 0;
}
