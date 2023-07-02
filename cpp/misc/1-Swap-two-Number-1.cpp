#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 15;
    cout << "number a " << a << "  number b " << b << "\n";

    b = b + a;
    a = b - a;
    b = b - a;
    cout << "swap result number a " << a << "  number b " << b << "\n";

    return 0;
}
