#include<iostream>

using namespace std;
/**
 * If both the numbers remain equal, for example, 121,
 *  when reversed, gives 121, the given number is a palindrome.
 *  Otherwise, the number is not a palindrome.
*/

int main(int argc, char const *argv[])
{
    int input;
    cout << "enter number ";
    cin >> input;
    int num = input;
    int tempNum = num;
    int digit ;
    int reversedNum = 0;

    do{
        digit = tempNum % 10;
        reversedNum = (reversedNum * 10) + digit;
        tempNum = tempNum / 10;
    }while(tempNum != 0);

     if(num == reversedNum){
        cout << "Number is Palindrome";
     }else{
      cout << "Number is not Palindrome";
     }

    return 0;
}
