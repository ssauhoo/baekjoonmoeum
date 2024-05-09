#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double a;

int main() {
    while (true) {
        cin >> a;
        if (a == 0) break;
        cout << fixed << setprecision(2) << 1 + a + pow(a, 2) + pow(a, 3) + pow(a, 4) << endl;
    }
    return 0;
}
