#include<iostream>

#include <string>

using namespace std;

/** Rules for prime number
* if the number is 0 or 1 , it cannot be prime
* if the number is 2, it is prime
* if the number is indivisible by other number, it is prime
*/

bool isPrime(int);
int main(int argc, char const *argv[])
{
    
    // press q for quit
    string isExit = "";
    int number;
  
    while( isExit != "Q" && isExit != "q"){

        cout << "FIND IS NUMBER IS PRIME  \n";
        cout << "Type a NUMBER & Press ENTER \n";
        cin >> number; 


        int result = isPrime(number);

        if(result){
             cout << number << " is PRIME  \n";
        }else{
           cout << number << " is NOT PRIME  \n";  
        }

       

        cout << "PRESS 'Q' for Exit \n";
        cin >> isExit;   

    }; 
    

    return 0;
}

bool isPrime(int number){
    if(number == 0 || number == 1){
        return false;
    }
    if(number == 2){
        return true;
    }
    for(int i = 2; i <= number/2; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
     
}