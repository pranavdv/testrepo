#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(!a){
        cout<<a;
        return 0;
    }
    vector<int> bits;
    while(a){
        bits.push_back(a%2);
        a>>=1;
    }
    for(int i=bits.size()-1;i>=0;i--) cout<<bits[i];
}