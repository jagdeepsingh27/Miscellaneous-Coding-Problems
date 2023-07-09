#include<iostream>
#include<string>

using namespace std;


/**
 * check is string palindrome
 * String is Palindrome if the the string on reverse is save as orignial string
 * eg: abcba  == reverseOf(abcba)
*/

int isStringPalindrome(string);

int main(int argc, char const *argv[])
{
    // press y for continue and n for exit
    string isExit;
    string input;
  
    do{
    
        cout << "CHECK IS STRING IS PLINDROME \n";
        cout << "Type a String & Press ENTER \n";
        cin >> input; 


        if(isStringPalindrome(input)){
            cout << "Palindrome";  
        }else{
            cout << "Not Palindrome";  
        }

        cout << "\n";

        cout << "PRESS 'y' for continue \n";
        cin >> isExit;   

    }while(isExit == "y" && isExit == "Y");

    return 0;
}

int isStringPalindrome(string input){
    int inputLength = input.length();
    if(inputLength == 1){
        return 1;
    }
   
    for(int i = 0 ; i < inputLength / 2 ; i++){
        if(input[i] != input[inputLength - i - 1]){
            return 0;
        }
    }
    return 1;
}

