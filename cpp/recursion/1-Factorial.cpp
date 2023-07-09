#include<iostream>

#include <string>

using namespace std;

int findFactorial(int);

int main(int argc, char const *argv[])
{
    
    // press y for continue and n for exit
    string isExit;
    int input;
  
    do{
    
        cout << "FIND FACTORIAL OF NUMBER  \n";
        cout << "Type a NUMBER to find factorial & Press ENTER \n";
        cin >> input; 


        int result = findFactorial(input);
       
        cout << "facotrial of " << input << " is "<< result <<  "\n";

        cout << "PRESS 'Q' for Exit \n";
        cin >> isExit;   

    }while(isExit != "q" && isExit != "Q"); 
    

    return 0;
}

int findFactorial(int number){
    int fact = 1;
    if(number == 1){
        return 1;
    }else{
        fact = number * findFactorial(number  -1);
    }
    return fact;
}