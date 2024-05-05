#include <iostream>

using namespace std;

int main() {
    int wavelength;
    cin >> wavelength;

    if (620 <= wavelength && wavelength <= 780)
        cout << "Red" << endl;
    else if (590 <= wavelength && wavelength < 620)
        cout << "Orange" << endl;
    else if (570 <= wavelength && wavelength < 590)
        cout << "Yellow" << endl;
    else if (495 <= wavelength && wavelength < 570)
        cout << "Green" << endl;
    else if (450 <= wavelength && wavelength < 495)
        cout << "Blue" << endl;
    else if (425 <= wavelength && wavelength < 450)
        cout << "Indigo" << endl;
    else if (380 <= wavelength && wavelength < 425)
        cout << "Violet" << endl;

    return 0;
}
