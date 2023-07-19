#include<iostream>
#include<string>
using namespace std;

/**change every letter in a given string with the letter following 
 * it in the alphabet (i.e. a becomes b, j becomes k, z becomes a).*/
int main(int argc, char const *argv[])
{

    string input;
    cout << "Type a String & Press ENTER \n";
    getline(cin,input) ; 

    cout << "Original string is " << input << endl;
	
    int charCode;

    for(int i = 0; i < input.size(); i++){
        charCode = int(input[i]);
        //122 is code of 'Z' 
        if(charCode == 122){
            //97 is charCode of 'A'
            input[i] = char(97);
        }
        else if(charCode == 90){
            //90 is char code of 'z'
            input[i] = char(65); //65 char code of 'a'
        }
        else if((charCode >= 65 && charCode <= 90) 
                    || (charCode >= 97 &&  charCode <= 122) 
                    ){
            input[i] = char(charCode + 1);
         }

       
    }

    cout << "Output string is   " << input << "\n";

    return 0;
}