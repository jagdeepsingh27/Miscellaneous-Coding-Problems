#include<iostream>
#include <algorithm>

using namespace std;
/**
 * Program to find Largest Element in an Array
*/
int main(int argc, char const *argv[])
{
  
    int array[40];
    int arraySize = 0;

    cout << "Enter size of array( Max:40 ) \n";

    cin >> arraySize;

    cout << "\nEnter array numbers \n";

    for(int i = 0; i < arraySize; i++){
        cout << "\nEnter arr["<<i<<"] Element --";
        cin >> array[i];
    }


    for(int i = 0; i< arraySize; i++)  {
        cout << " " << array[i] << " ";
    }

    int size = sizeof(array) / sizeof(array[0]);



    int  largestNumber = array[0];

    for (int i = 0; i<arraySize; i++) {
        if(array[i] > largestNumber){
            largestNumber = array[i];
        }
    }
 
    cout << "\n Largest Number in an Array " << largestNumber << "\n";

    return 0;
}