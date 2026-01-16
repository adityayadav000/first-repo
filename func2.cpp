#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for (int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n,int r){
    int num =factorial(n);
    int deno =factorial(r)*factorial(n-r);

    return num/deno;
}
int main() {
    
    cout << ncr(5,2) << endl;
    cout << ncr(10,3) << endl;

    return 0;
}
