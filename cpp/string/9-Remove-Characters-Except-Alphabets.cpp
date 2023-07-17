#include<iostream>
#include<string>
using namespace std;

/**Remove Characters from string except alphabets*/
int main(int argc, char const *argv[])
{

    string input;
    cout << "Type a String & Press ENTER \n";
    getline(cin,input) ; 

    cout << "Original string is " << input << endl;

    bool isSortPending;
	char ch;

    int length = input.size();

    for(int i = 0; i < length; i++){
        char ch = input.at(i);
        if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
            input[i] = '\0';
        }
    }

    cout << "String after removing characters  " << input << "\n";

    return 0;
}