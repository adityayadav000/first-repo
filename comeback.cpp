#include <iostream>
using namespace std;

int decitobinary(int decinum){
    int ans=0;
    int pow=1;

    while (decinum>0){
        int rem = decinum%2;
        decinum/=2;
        ans+=rem*pow;
        pow*=10;
    }
    return ans;
}
int main() {
    cout << decitobinary(51) << endl; // Output: 110010
    return 0;
}