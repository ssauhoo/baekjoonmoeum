#include <iostream>
using namespace std;
int main(){
    int a; 
    cin>>a;
    int c = 0xAC00 + (a - 1);
    char s[4];
    s[0] = char(0xE0 | ((c >> 12) & 0x0F));
    s[1] = char(0x80 | ((c >> 6) & 0x3F));
    s[2] = char(0x80 | (c & 0x3F));
    s[3] = '\0';
    cout<<s;
}
