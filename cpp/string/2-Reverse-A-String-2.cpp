#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string input;

    cout << "Type a String for reverse & Press ENTER \n";

    cin >> input; 


    int inputLength = input.length();
    string revString = "";

    for(int i = 0 ; i < inputLength ; i++){
        revString = input.at(i) + revString;
    }

    cout << revString;
    cout << "\n";

    return 0;
}
