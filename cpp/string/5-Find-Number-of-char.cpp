#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    
     string main;
     char search;


    cout << "Type String  & Press ENTER \n";
    cin >> main; 

    cout << "\n";
    cout << "Type Char for search in string  & Press ENTER \n";
    cin >> search; 

    
    int length = main.length();
    int count = 0;

    for(int i = 0; i < length; i++){
        if(main.at(i) == search){
            count += 1;
        }
    }

    cout << "Result  number  ";
    cout << count;



    return 0;
}
