#include<iostream>
#include<string>
using namespace std;

/**program to find the word count in a given string*/
int main(int argc, char const *argv[])
{

    string input;
    cout << "Type a String & Press ENTER \n";
    getline(cin,input) ; 

    cout << "Original string is " << input << endl;

   
    int length = input.size();

    int wordCounter = 0;
	for (int i = 0; i < length; i++)
	{
		if (input[i] == ' ')
			wordCounter++;
	}
	
    wordCounter +=1;
    cout << "Word counts in string  " << wordCounter << "\n";

    return 0;
}