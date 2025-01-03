#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> PrimeNumerSieve(int n)
{
    vector<int> returnPrimes;
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i *i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            returnPrimes.push_back(i);
        }
    }

    return returnPrimes;
}

int main()
{
    string K;
    int L;
    vector<int> Primes;
    cin >> K >> L;


    
    //1. L 미만의 소수를 찾는다
    //2. L 미만의 소수 순환하여 나누어 지는지 판단.


 
   //1. L 미만의 소수를 찾는다
   //아리토스테네스 체를 이용하여 소수 배열을 만든다.
  
    Primes = PrimeNumerSieve(L);
 
    //2. L 미만의 소수 순환하여 나누어 지는지 판단.
    //글자 앞에서 부터 가져와서 나누어 판단
    bool Good = true;
    int BadNumber = 0;
    for (int i = 0; i < Primes.size(); i++)
    {
        int Prime = Primes[i];
        int remainder = 0;
        for (char digit : K)
        {
            remainder = ((remainder * 10) + (digit - '0')) % Prime;         
        }

        if (remainder == 0)
        {
            BadNumber = Prime;
            if (BadNumber < L)
            {
                Good = false;
            }
            break;
        }

    }


    if (Good)
    {
        cout << "GOOD";
    }
    else
    {
        cout << "BAD " << BadNumber;
    }
    

    return 0;
}