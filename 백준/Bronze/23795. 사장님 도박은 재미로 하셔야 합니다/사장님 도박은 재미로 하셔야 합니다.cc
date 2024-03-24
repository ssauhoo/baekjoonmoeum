
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int cnt = 0;
    while (a != -1) {
        cin >> a;
        if (a == -1) {
            break;
        }
        else {
            cnt = cnt + a;
        }
    }
    cout << cnt;
}

