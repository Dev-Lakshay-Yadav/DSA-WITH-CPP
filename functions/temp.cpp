#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello";
}

int parameterFunction(int a, int b)
{
    return a + b;
}

int minOf2Numbers(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int sumUpToN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}

int bionomislCoeficint(int n, int r)
{
    int nFact = factorialN(n);
    int rFact = factorialN(r);
    int cFact = factorialN(n - r);
    return nFact / (rFact * cFact);
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int primeUpToN(int n){
    for(int i=2;i<=n ; i++){
        if(isPrime(i)) cout<<i<<endl;
    }
}

int fibonacciSeries(int n){
    int prev=0;
    int next=1;
    if(n==1) return prev;
    if(n==2) return next;

    int fibN;

    for(int i = 3 ; i<=n; i++){
        fibN = prev + next;
        prev = next;
        next = fibN;
    }
    return fibN;
}

int main()
{
    // printHello();
    // cout << "Sum is :"<<parameterFunction(5,12)<<endl;
    // cout << "Min is :"<<minOf2Numbers(15,12)<<endl;

    // cout << "Sum up to n : "<<sumUpToN(5)<<endl;
    // cout << "Fact up to n : "<<factorialN(5)<<endl;

    // Now we are only dealing with pass by value not pass by reference we will discuss this pass by refernce later in pointers
    // Primitive data type are by default pass by value -> int, float, char, string, double, long etc
    // Non-Primitive data type are by default pass by reference -> array, linklist, queue, stack etc

    // cout << "Digit sum is : " << digitSum(1234) << endl;
    // cout << "Bionomial Coeficient is : " << bionomislCoeficint(8,2) << endl;
    
    // cout << "Number is Prime : " << isPrime(7) << endl;
    // primeUpToN(11);

    cout << "Fibonacci n is : " << fibonacciSeries(8) << endl;

    return 0;
}