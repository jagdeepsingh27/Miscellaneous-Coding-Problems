#include<iostream>

using namespace std;
int add(int);
int main(int argc, char const *argv[])
{
    int input;
    cout << "enter number ";
    cin >> input;
   
    int sum = add(input);
    cout << "total " << sum << "\n" ;


    return 0;
}
int add(int num){
    int sum = 0, r;
    if(num < 10){
        return num;
    }
    r = num % 10;
    num = num / 10;
    sum = r + add(num);
    return sum;
}