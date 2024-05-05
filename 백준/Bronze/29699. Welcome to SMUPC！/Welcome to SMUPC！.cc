#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "WelcomeToSMUPC";
    int N;
    cin >> N;

    int index = (N % 14) - 1;
    if (index < 0)
        index += 14;

    cout << s[index] << endl;

    return 0;
}
