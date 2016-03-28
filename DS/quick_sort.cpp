#include<iostream>
using namespace std;

int arr[5] = {2,5,1,3,4};


void quick_sort(int left , int right ){
int temp;
int i = left ;
int j = right;
int pivot = arr[( i+j)/2];
    while(i<=j){
        while (arr[i]<pivot){
            i++;
        }

        while (arr[j]>pivot){
            j--;
        }
        if(i<=j){
            temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        if (j>left){
            quick_sort(left,j);
        }
        if(i<right){
            quick_sort(i,right);
        }
    }
}
void print_arr(){
int i ;
for (i = 0 ; i <5 ; i++){
    cout<<arr[i];
}

}
int main(){

quick_sort(0,4);
print_arr();

return 0;
}
