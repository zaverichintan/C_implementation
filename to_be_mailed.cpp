#include<iostream>
#include <stdlib.h>//for malloc

using namespace std ;

// structure for link list
struct linklist{
    int num;
    struct linklist *next;
};
//initialize first pointer
struct linklist *first = (struct linklist *) malloc( sizeof(struct linklist) );
struct linklist *head = first ;

// for traversing the link list and printing the numbers in list
void print_linklist(){
head = first;//to start from first
  while(head->next != NULL){
    cout<<head->num <<endl;
    head = head->next;
  }

}

int main(){
int numL = 0 ;
bool check = false ;
int temp = 1;

while(check == false){
    cout<<"enter number";
    cin>>numL;
    struct linklist *tempnode = (struct linklist *) malloc( sizeof(struct linklist) );
    head->next = tempnode ; // to store the address of new node in the next pointer of current node - which means linking of 2 structures
    head->num = numL; // to store the value of user input
    tempnode->next = NULL ; // for security purpose we make the next pointer null of the new node
    head = tempnode;// to move the head to the new node
// to continue till the user presses 1
    cout<<"press 1 to continue";
    cin>>temp ;
    if (temp != 1 ){check = true ;}
}
print_linklist() ;
return 0 ;
}
