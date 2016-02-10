#include<iostream>
using namespace std ;
int a[5] = {1,2,3,4,5};
void print_arr(){
int i ;
for (i = 0 ; i<5 ; i++){
    cout<<a[i];
}
cout<<endl;
}


void sort_array(int i ){

int j ;

    for (j=i;j>0;j--){
        a[j] = a[j-1];

    }
cout<<"sort:";print_arr();
}

void func(){
int i = 0 ;
while (i<5){
    if(a[i]%2==0){
        int temp = a[i];
        sort_array(i);
        a[0] = temp ;
         print_arr();
    }

    i++;
}

}



int main(){
print_arr();
func();

}
