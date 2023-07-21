#include<iostream>
#include <algorithm>

using namespace std;
/**
 * Program to find most frequent Element in an Array
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


    for (int i = 0; i < arraySize; i++) {
       int count = 1;
       for(int j = i+1; j < arraySize; j++){
            if(array[i] == array[j]){
                count +=1;
            }
       }
       if(count > maxCount){
         maxCount = count;
       }
    }


    for (int i = 0; i < arraySize; i++){
        int count = 1;
       for(int j = i+1; j < arraySize; j++){
          if(array[i] == array[j]){
                count +=1;
            }
       }
       if(count == maxCount){
        cout << "result number is " << array[i] << "\n";
       }
    }


    return 0;
}