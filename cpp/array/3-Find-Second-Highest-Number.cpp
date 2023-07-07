#include<iostream>
#include <algorithm>

using namespace std;
/**
 * find the second highest number form the integer array
*/
int main(int argc, char const *argv[])
{
    int a[] = {5,2,3,11,18,7,9,4,6};

    cout << a << "\n";

    int highest = 0;
    int secondHighest = 0;

    for(int element : a){
        if(element > highest){
            secondHighest = highest;
            highest = element;
        }else if (element > secondHighest){
            secondHighest = element;
        }
    }
     
    cout << "Second highest number " << secondHighest <<  "\n";
    return 0;
}

