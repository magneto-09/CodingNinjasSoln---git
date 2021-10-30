Print Permutations:-
Given an input string (STR), print all possible permutations of the input string.

Note:
The input string may contain the same characters, so there will also be the same permutations.
The order of permutations doesn’t matter.

Input Format:
The only input line contains a string (STR) of alphabets in lower case

Output Format:
Print each permutations in a new line

Note:
You do not need to print anything, it has already been taken care of. Just implement the function.  

Constraint:
1<=length of STR<=8
Time Limit: 1sec

Sample Input 1:
cba

Sample Output 1:
abc
acb
bac
bca
cab
cba


#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

#include <iostream>
#include <string>
using namespace std;

void helper(string input, string output) {
    if(input.empty()) {
        cout << output << endl;
        return;
    }
    
    int length = input.length();
    
    for(int i = 0; i < length; i++) {
        if(length == 0) {
            helper(input.substr(1), output + input[0]);
            
        } else if(i < length - 1) {
            helper(input.substr(0,i) + input.substr(i + 1), output + input[i]);
        }
        else {
            helper(input.substr(0,i), output + input[length - 1]);
        }
    }
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    
    helper(input, "");
}


int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}