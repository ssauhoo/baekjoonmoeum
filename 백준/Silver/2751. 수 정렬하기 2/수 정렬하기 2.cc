#include <iostream>
#include <algorithm>
using namespace std;
int arr1[1000001];
int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        cin >> arr1[i];
    }
    sort(arr1,arr1+a);
    for(int i = 0; i<a; i++){
        cout << arr1[i] << "\n";
    }
}