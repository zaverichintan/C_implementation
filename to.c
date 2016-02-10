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
