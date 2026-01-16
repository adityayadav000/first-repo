#include <iostream>
#include <climits>
using namespace std;

int main () {

    int nums[]={5,-8,34,0,2,-9};
    int size=6;
    int smallest=INT_MAX;

    for(int i=0; i<size; i++){

        if(nums[i]<smallest){
            smallest=nums[i];
        }
        
    }
    cout<<smallest<< endl;


    

}