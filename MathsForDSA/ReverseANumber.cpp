#include<iostream>
using namespace std;

int revNumber(int a) {
    int reverse = 0;
    while(a!=0){
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a/10;
    }
    return reverse;
}
int main ()
{
    cout<< "Reverse is : "<< revNumber(1234);
    return 0;
}