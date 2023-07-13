#include <iostream>
#include <string>

using namespace std;

/**
 *  Write a C++ program to change every letter in a given
 *  string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
*/

string captializeFirstLetterOfWord(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main() 
{
	cout << captializeFirstLetterOfWord("Apples are red") << "\n";
	return 0;
}