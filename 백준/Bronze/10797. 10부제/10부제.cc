#include <iostream>
#include <algorithm>
using namespace std;
int arr1[5];
int main() {
    int a;
    int cnt = 0;
    cin >> a;
    for(int i = 0; i<5; i++){
        cin >> arr1[i];
    }
    a = a%10;
    for(int i = 0; i<5; i++){
        if(a == arr1[i]){
            cnt ++;
        }
    }
    cout << cnt;
}