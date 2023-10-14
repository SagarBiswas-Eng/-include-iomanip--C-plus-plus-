#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265359;
    int num = 42;
    bool flag = true;

    // Using setw to set field width
    cout << "Using setw(10)\t\t\t\t: ";
    cout << setw(10) << num << endl;

    // Using setprecision to control decimal places for floating-point numbers
    cout << "Using setprecision(3)\t\t\t: ";
    cout << setprecision(3) << pi << endl;

    // Using setfill to specify the fill character
    cout << "Using setfill('*')\t\t\t: ";
    cout << setfill('*') << setw(10) << num << endl;

    // Using fixed and scientific notation for floating-point numbers
    cout << "Using fixed and scientific notation\t: ";
    cout << fixed << pi << " and " << scientific << pi << endl;


    // Using noboolalpha and boolalpha to display boolean values as 0 or 1
    cout << "Using noboolalpha and boolalpha\t\t: ";
    cout << noboolalpha << flag << " and " << boolalpha << flag<< endl;

    // Using showbase and noshowbase for displaying base prefixes
    int hex_num = 255;
    cout << "Using showbase and noshowbase\t\t: ";
    cout << showbase << hex << hex_num << " and " << noshowbase << hex << hex_num << endl;

    // Using setiosflags to set multiple flags at once
    cout << "Using setiosflags\t\t\t: ";
    cout.setf(ios::showpos | ios::uppercase);
    cout << num << endl;

    return 0;
}
