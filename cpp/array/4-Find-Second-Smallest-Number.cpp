#include<iostream>
#include <algorithm>

using namespace std;
/**
 * find the second smallest number form the integer array
*/
int main(int argc, char const *argv[])
{
    int a[] = {5,2,33,11,18,7,9,41,6};

    cout << a << "\n";

    int smallest = 0;
    int secondSmallest = 0;

    if (a[0] < a[1]) {
        smallest = a[0];
        secondSmallest = a[1];
     } else {
        smallest = a[1];
        secondSmallest = a[0];
     }

    for(int element : a){
        if (smallest > element) {
            secondSmallest = smallest;
            smallest = element;
        } else if (element < secondSmallest && element > smallest) {
            secondSmallest = element;
        }
    }
     
    cout << "Second samallest number " << secondSmallest <<  "\n";
    return 0;
}
