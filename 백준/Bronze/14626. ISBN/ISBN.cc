#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0, pos = -1;
    for (int i = 0; i < 13; i++) {
        if (s[i] == '*') pos = i;
        else sum += (s[i] - '0') * (i % 2 ? 3 : 1);
    }
    for (int d = 0; d <= 9; d++) {
        int tmp = sum + (d * (pos % 2 ? 3 : 1));
        if (tmp % 10 == 0) {
            cout << d;
            break;
        }
    }
}
