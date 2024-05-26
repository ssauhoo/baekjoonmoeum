#include <iostream>
using namespace std;

int arr[10];

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    long long d = a * b * c;

    while (d != 0) {
        arr[d % 10]++;
        d = d / 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}