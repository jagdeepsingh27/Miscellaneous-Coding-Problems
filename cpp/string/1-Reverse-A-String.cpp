#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;

    cout << "Type a String for reverse & Press ENTER \n";

    cin >> input; 


    int inputLength = input.length();
    string revString = "";

    for(int i = inputLength - 1 ; i >= 0; i--){
        revString = revString + input.at(i);
    }

    cout << revString;

    return 0;
}



