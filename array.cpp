#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[]={5,-1,3,-2,24,-18};
    int size=6;
int smallest =INT_MAX;
for (int i=0;i<=size;i++){
    if(nums[i]< smallest){
    smallest=nums[i];
}
}
cout << "Smallest element is: " << smallest << endl;


    return 0;
}