#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec;

    cout<<"size="<<vec.size()<<endl;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    cout<<"size after ="<<vec.size()<<endl;

vec.pop_back();
    

        cout << vec.at(0)<< endl;
    
    return 0;
}