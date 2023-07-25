#include<iostream>
#include<string>
using namespace std;
/**
 * Remove outer parenthesis
 * input - (()())(())
 * output - ()()()
 * 
 * Ascii value of ( -> 40  and  ) -> 41
 */

int main(int argc, char const *argv[])
{

    string input = "(()())(())";
  

    cout << endl << "Original string is " << input << endl;

	string resultString ;

     int j = 0;
    for(int i = 0; i < input.length() ; i++){
        if(input.at(i) == 41){
            j--;
        }
        if(j != 0){
            resultString = resultString + input.at(i);
        }    
        if(input.at(i) == 40){
            j++;
        }

    }


    cout << "Output  is   " << resultString << "\n";

    return 0;
}