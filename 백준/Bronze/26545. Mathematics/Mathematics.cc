#include <iostream>

using namespace std;

int main(){
    int a,b;
    int cnt = 0;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >>b;
        cnt = cnt +b;
    }
    cout << cnt;
}
