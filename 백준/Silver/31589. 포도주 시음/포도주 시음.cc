#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N , K;
    vector<int> v;
    long long result = 0;
    
    cin >> N;
    cin >> K;
    v = vector<int>(N);
    for(int i = 0 ; i < N ; ++i)
    {
      cin >> v[i];
    }
    
    sort(v.rbegin() , v.rend());
    
    result = v[0];
    --K;
    
    int L = 1;
    int R = N - 1;
    while(K > 1)
    {
     long long x = v[L] - v[R];
       
      result += x;
      ++L;
      --R;
      K -= 2;
    }
      
    cout << result;
    
    return 0;
}