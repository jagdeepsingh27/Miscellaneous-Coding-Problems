#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string input;

    cout << "Type a String for reverse & Press ENTER \n";

    cin >> input; 

    int left = 0;
    int right = input.length() - 1;

    while(left < right){
        char c = input[right];
        input[right] = input[left];
        input[left] = c;
        left += 1;
        right -= 1;
    }


    cout << input;
    cout << "\n";

    return 0;
}