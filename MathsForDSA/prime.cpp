#include <iostream>
#include <vector>
using namespace std;

/*

//   suppose all are prime
  ||   2   3   4   5   6   7   8   9   10
  11  12  13  14  15  16  17  18  19  20
  21  22  23  24  25  26  27  28  29  40
  31  32  33  34  35  36  37  38  39  40
  41  42  43  44  45  46  47  48  49  50


//   then disacrd multiples of 2 because thea rea always not prime except 2 itself becuase 1 st prime number
  ||   2   3   ||  5   ||  7   ||  9   ||
  11  ||  13  ||  15  ||  17  ||  19  ||
  21  ||  23  ||  25  ||  27  ||  29  ||
  31  ||  33  ||  35  ||  37  ||  39  ||
  41  ||  43  ||  45  ||  47  ||  49  ||


//   Also discard multiples of 3
  ||   2   3   ||  5   ||  7   ||  ||   ||
  11  ||  13  ||  ||  ||  17  ||  19  ||
  ||  ||  23  ||  25  ||  ||  ||  29  ||
  31  ||  ||  ||  35  ||  37  ||  ||  ||
  41  ||  43  ||  ||  ||  47  ||  49  ||


//   Also discard multiples of 5
  ||   2   3   ||  5   ||  7   ||  ||   ||
  11  ||  13  ||  ||  ||  17  ||  19  ||
  ||  ||  23  ||  ||  ||  ||  ||  29  ||
  31  ||  ||  ||  ||  ||  37  ||  ||  ||
  41  ||  43  ||  ||  ||  47  ||  49  ||


//   Also discard multiples of 7
  ||   2   3   ||  5   ||  7   ||  ||   ||
  11  ||  13  ||  ||  ||  17  ||  19  ||
  ||  ||  23  ||  ||  ||  ||  ||  29  ||
  31  ||  ||  ||  ||  ||  37  ||  ||  ||
  41  ||  43  ||  ||  ||  47  ||  ||  ||

*/

// Return count of prime basically range of prime like 1 to 15 -> 2,3,5,7,11,13
// sieve of eratosthenes

void primeRange(int n)
{
    vector<bool> allPrime(n + 1, true);
    int i = 2;

    while (i * i <= n)
    {
        if (allPrime[i])
        {
            int j = 2 * i;
            while (j <= n)
            {
                allPrime[j] = false;
                j += i;
            }
        }
        i++;
    }
    int count = 1;
    for (int i = 2; i < allPrime.size(); i++)
    {
        if (allPrime[i] == 1)
        {
            cout << i << endl;
            count++;
        }
    }
    cout << "Total primes in range are : " << count;
}

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return "Not Prime";
        }
    }
    return "Yes Prime";
}

int main()
{
    int n = 47;
    // cout<<isPrime(n);

    primeRange(50);

    return 0;
}