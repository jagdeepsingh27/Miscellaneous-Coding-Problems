#include<iostream>

using namespace std;


/**
 * Condtions for leap year
 * 1. divide by 400 
 * 2. divide by 4 but not by 100
*/
int main(int argc, char const *argv[])
{
    int year;
    cout << "enter Year ";
    cin >> year;
   
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout << "Leap year";
            }else{
                cout << "Not leap year";
            }

        }else{
            cout << "Leap year";
        }

    }else{
        cout << "not a leap year";
    }

    return 0;
}