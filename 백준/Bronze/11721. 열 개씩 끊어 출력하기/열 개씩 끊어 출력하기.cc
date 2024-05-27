#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int length = a.length();
    
    for(int i = 0; i < length; i += 10) {
        cout << a.substr(i, 10) << "\n";
    }
    
    return 0;
}
