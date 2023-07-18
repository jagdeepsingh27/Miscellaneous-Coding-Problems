#include<iostream>
#include<string>
using namespace std;

/**Insert a dash between two odd numbers in a string*/
int main(int argc, char const *argv[])
{

    string input;
    cout << "Type a String & Press ENTER \n";
    getline(cin,input) ; 

    cout << "Original string is " << input << endl;
	string resultString = input;

    for(int i = 0; i < input.size() - 1; i++){
        char ch = input.at(i);
        char nextCh = input.at(i + 1);
        if((ch == '1' || ch == '3' || ch == '5' || ch == '7' || ch == '9') 
              && (nextCh == '1' || nextCh == '3' || nextCh == '5' || nextCh == '7' || nextCh == '9') ){
            resultString.insert(i + 1,"-");
            input = resultString;
        }
    }

    cout << "Output string is   " << input << "\n";

    return 0;
}