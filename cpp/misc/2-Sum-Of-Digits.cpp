#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int input;
    cout << "enter number ";
    cin >> input;
    int num = input;
    int sum = 0;
    int d = 0;

    while(num > 0){
        d = num % 10;
        sum = sum + d;
        num = num/10;
    }

    cout << "total " << sum << "\n" ;


    return 0;
}
