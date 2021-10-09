/*
 Write a recursive function that returns the sum of the digits of a given integer.

Input format :
Integer N

Output format :
Sum of digits of N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
12345
Sample Output 1 :
15

Sample Input 2 :
9
Sample Output 2 :
9

 */ 

#include <iostream>
#include "solution.h"
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    
    if(n == 0) {
        return 0;
    }
    
    int sum;
    int smallOutput = sumOfDigits(n / 10);
    int ld = n % 10;
      sum = smallOutput + ld;
    return sum;
}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

