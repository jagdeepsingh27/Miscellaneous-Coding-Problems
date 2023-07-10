#include<iostream>

#include <string>

using namespace std;

/**
 * the fabonacci numbers are the numbers in the following integer squence
 * 0,1,1,2,3,5,8,13,21,34,55,89,144...........
 * 
 * The first two terms of the Fibonacci sequence is 0 followed by 1.
 * 0,1
 * 0+1 = 2 //3rd term = 1st + 2nd
 * 1+2 = 3 //4th term = 2nd + 3rd
 * 2+3 = 5 //5th term = 3rd + 4th...
 * 3+5 = 8
 * ................
*/



int main(int argc, char const *argv[])
{
    int numberOfTerms; 
    //default term1 is 0 and term2 is 1
    int term1 = 0, term2 = 1;
    int nextTerm = 0;

    cout << "Enter the number of terms ";
    cin >> numberOfTerms;
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= numberOfTerms; ++i) {
        //print first terms
        if(i == 1) {
            cout << term1 << ", ";
            continue;
        }
        //print 2nd term
        if(i == 2) {
            cout << term2 << ", ";
            continue;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        cout << nextTerm << ", ";
    }


    return 0;
}
