#include <iostream>
using namespace std;
int main() {
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i =0; i<3; i++){
        for(int j = 0; j<4; j++){
            int a;
            cin >> a;
            if(a == 0){
                cnt1 ++;
            }
            else if(a == 1){
                cnt2  ++;
            }
        }
        if(cnt1 == 1 && cnt2 == 3){
            cout <<"A\n";
        }
        else if(cnt1 == 2 && cnt2 == 2){
            cout <<"B\n";
        }
        else if(cnt1 == 3 &&cnt2 == 1){
            cout <<"C\n";
        }
        else if(cnt1 == 4){
            cout << "D\n";
        }
        else{
            cout <<"E\n";
        }
        cnt1 = 0;
        cnt2 = 0;
    }
}
