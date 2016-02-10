//to find permutation of a number
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
using namespace std ;

// structure for link list
struct stack_in_array{
    int num;
    struct stack_in_array *next;
};
struct stack_in_array *first = (struct stack_in_array *) malloc( sizeof(struct stack_in_array) );
struct stack_in_array *head = first ;

// global declaration of array and variable
int i ;
int array_a[20];
int counter_array[20];
int counter;
// for traversing the link list and check that does the number already exists in list
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
// for storing the number to linklist
void store_to_linklist(int a){
counter++;
// if traversing link list returns false that means no record exists so create a new node
    if(traverse_linklist(a) == false){
    cout<<a<<endl;
    head->num = a ;
    struct stack_in_array *newnode = (struct stack_in_array *) malloc( sizeof(struct stack_in_array) );
    head->next = newnode;
    head=head->next;
    head->next = NULL;//for security
    }
}
// converts the input number to store in array
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
// there should be no repetition
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
//to print the link list
void print_link_list(){
    head = first ;
    FILE *fd = fopen("output.txt","w");//to open the file

    while(head->next != NULL){
        fprintf(fd,"%d \n",head->num);
        head = head->next;
    }
    fclose(fd);//to close the file
}
//to convert the digits into number
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
//to append the logic of counter - increasing the last counter and when the limit is reached
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
//to increase the counter of next robin
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
cout<<"Enter a Number - ";
cin>>a;

digit = num_to_array(a);
logic(digit);
print_link_list();
cout<<"The total numbers "<<counter;
//cin>>i;
return 0;
}
