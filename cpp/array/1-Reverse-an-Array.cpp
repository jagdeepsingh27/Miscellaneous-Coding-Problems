#include<iostream>
#include <algorithm>

using namespace std;

/**
 * Revers an array
*/

int main(int argc, char const *argv[]){
     
    int a[] = {1,2,4,6,3,9,31,15};
   
    int n = sizeof(a) / sizeof(a[0]);

    for(int i =0; i < n/2; i++){
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i -1] = tmp;
    }

    for(int j = 0; j< n ; j++){
        cout << a[j] << " , ";
    }
    

    return 0;
}
