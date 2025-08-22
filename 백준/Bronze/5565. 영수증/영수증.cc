#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a;
    for(int i=0;i<9;i++){
        cin>>b;
        c+=b;
    }
    cout<<a-c;
}
