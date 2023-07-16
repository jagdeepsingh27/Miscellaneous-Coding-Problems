#include<iostream>
#include<string>
using namespace std;

/** sort the character of the string alphabetically */
int main(int argc, char const *argv[])
{

    string input;

    cout << "Type a String & Press ENTER \n";

    getline(cin,input) ; 

    bool isSortPending;
	char ch;

	do
	{
		isSortPending = false;

		for (int i = 0; i < input.length() - 1; i++)
		{
			if (input[i] > input[i + 1])
			{
				ch = input[i];
				input[i] = input[i + 1];
				input[i + 1] = ch;
				isSortPending = true;
			}
		}
	} while (isSortPending);

	/* Remote the spaces form the string*/
	string outputString;
	for (int j = 0; j < input.length(); j++)
	{
		if (input[j] != ' ')
		{
			outputString.push_back(input[j]);
		}
	}

    cout << "Sorted string " << outputString << "\n";

    return 0;
}