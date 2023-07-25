#include<iostream>
#include <algorithm>

using namespace std;
/**
 Sum of Element in an Array
*/
int main(int argc, char const *argv[])
{
  
    int array[40];
    int arraySize = 0;
    int maxCount = 0;

    cout << "Enter size of array( Max:40 ) \n";

    cin >> arraySize;

    cout << "\nEnter array numbers \n";

    for(int i = 0; i < arraySize; i++){
        cout << "\nEnter arr["<<i<<"] Element --";
        cin >> array[i];
    }

    //print array elements
    for(int i = 0; i< arraySize; i++)  {
        cout << " " << array[i] << " ";
    }
    cout << endl;
    //size of array
    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
       sum += array[i];
    }
  //Output Result
     cout << endl << sum << endl;

   


    return 0;
}