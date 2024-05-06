#include <iostream>

using namespace std;
int arr[5];
int main()
{
    int a,b;
    cin >> a >>b;
    for(int i = 0; i<5; i++){
        int c;
        cin >>c;
        arr[i] = c;
    }
    for(int i =0; i<5; i++){
        cout << arr[i] - (a*b) << " ";
    }
}
