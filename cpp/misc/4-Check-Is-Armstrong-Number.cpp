#include<iostream>

#include <string>

using namespace std;

/**
 * Number is armstrong is the sum of cube of all digit is the same as the number itself
 * eg: number = 153 
 *    number is armstrong if  (1^3 + 5^3 + 3^3) == 153
*/

int isArmstrong(int);
int main(int argc, char const *argv[])
{
    
    // press q for quit
    string isExit;
    int number;
  
    do{

        cout << "FIND IS NUMBER IS ARMSTRONG  \n";
        cout << "Type a NUMBER & Press ENTER \n";
        cin >> number; 


        int result = isArmstrong(number);

        if(result == 1){
             cout << number << " is Armstrong  \n";
        }else{
           cout << number << " is Not Armstrong  \n";  
        }

       

        cout << "PRESS 'Q' for Exit \n";
        cin >> isExit;   

    }while(isExit != "q" || isExit != "Q"); 
    

    return 0;
}

int isArmstrong(int number){
    int remainder;
    int remainderCube; 
    //it will contain the original number during process
    int temp = number;
    //will contains the sum of cube of the digits
    int sum = 0;

    while(number > 0){
        remainder = number % 10;
        remainderCube = remainder * remainder * remainder;
        sum = sum + remainderCube;
        //eliminate the last digit from the number
        number = number/10;
    }
    number = temp;

    if(number == sum){
        return 1;
    }else{
        return 0;
    }
}