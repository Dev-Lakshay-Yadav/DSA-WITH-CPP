// Only positive numbers can be palindrome number because negative has - sign in start
//  353, 4224 etc

#include<iostream>

using namespace std;


bool isPalindrome(int a) {
    int original = a,reverse = 0;
    while(a!=0){
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a/10;
    }
    return original == reverse ? true : false ;
}

int main ()
{
        cout<< "Palindrome check : "<< isPalindrome(353);
    return 0;
}