#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,1,5,7,6,9,4,6};

    int size = sizeof(a) / sizeof(a[0]);
    cout << "size " << size << " \n";

    for(int i = 0; i < size; i++){
        for(int j = i + 1 ; j < size; j++){
            if(a[i] == a[j]){
                cout << "number matched " << a[i] << " \n";
            }
        }

    }

    return 0;
}

