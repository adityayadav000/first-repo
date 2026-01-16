#include <iostream>
using namespace std;

int bintodeci(int binum) {
    int ans=0;int pow=1;

    while (binum>0){

        int rem=binum%10;
    ans+=rem*pow;
    binum/=10;
    pow*=2;
    }
    return ans;

}
int main() {
    cout << bintodeci(11001) << endl; // Output: 50
    return 0;
}   