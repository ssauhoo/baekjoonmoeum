#include <iostream>
using namespace std;

int a;

void f(int x, int y, int n){
    if(n==1){
        cout<<"*";
        return;
    }
    int m=n/3;
    if((x/m)%3==1 && (y/m)%3==1){
        cout<<" ";
    }else{
        f(x,y,m);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            f(i,j,a);
        }
        cout<<"\n";
    }
}
