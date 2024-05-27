#include <iostream>
using namespace std;

string a, b;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int main(){
    cin >> a >> b;
    if(isPrime(stoi(a)) && isPrime(stoi(b + a))) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
