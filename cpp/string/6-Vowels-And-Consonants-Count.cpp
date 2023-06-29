#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{

    string input;

    cout << "Type a String & Press ENTER \n";

    cin >> input; 

    int vowels = 0;
    int consonats = 0;

    for(int i = 0; i < input.length(); i++){
        char c = tolower(input.at(i));
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowels++;
        }else{
            consonats++;
        }
    }



    cout << "Vowels count " << vowels << "\n";
    cout << "Consonants count " << consonats << "\n";

    return 0;
}