#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string P;  // 큰 수 P (암호)
    int K;     // 검사 범위 K
    cin >> P >> K;
    
     vector<int> primes;
      vector<bool> isPrime(K, true);
    // 에라토스테네스의 체를 이용하여 K 미만의 소수를 구함
    {    
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i <= sqrt(K); ++i) 
        {
            if (isPrime[i]) {
                for (int j = i * i; j < K; j += i) 
                {
                    isPrime[j] = false;
                }
            }
        }
    }
   
    for (int i = 2; i < K; ++i) 
    {
        if (isPrime[i]) 
        {
            primes.push_back(i);
        }
    }
    
    for (int prime : primes) 
    {
        int remainder = 0;
        // 소수로 prime를 나눌 수 있는지 확인
        //z
        for (char digit : P) 
        {
           remainder = (remainder * 10 + (digit - '0')) % prime;
        }
        if(remainder == 0)
        {
             cout << "BAD " << prime << endl;
            return 0;
        }      
     }
    
    
      cout << "GOOD" << endl;
    return 0;
}
