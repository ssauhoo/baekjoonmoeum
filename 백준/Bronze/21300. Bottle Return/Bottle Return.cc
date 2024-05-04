#include <iostream>

using namespace std;

int main()
{
    int a;
    int cnt =0;
    for(int i = 0; i<6; i++){
        cin >> a;
        cnt += a;
    }
    cout << cnt*5;
}
