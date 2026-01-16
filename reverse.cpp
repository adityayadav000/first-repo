#include <iostream>
using namespace std;

void reverse(int arr[],int sz){
int start=0;
int end=sz-1;

while(start<end){
    swap(arr[start],arr[end]);
     start++;
     end--;
}

}

int main() {
    int arr[]={4,32,56,21,76,43,21};
    int sz=7;
  reverse(arr,sz);
    for(int i=0; i<sz; i++){

   cout<<arr[i]<<"  " ;

    }

    cout<<endl;
    return 0;
}