#include <iostream>
#include <algorithm> 

using namespace std;

int Nums[1001];  
int Counts[1001]; 
int N;
int max_length = 0; 

void DP()
{
    for (int i = 0; i < N; ++i) 
    {
        Counts[i] = 1; 
        for (int j = 0; j < i; ++j)
        {
            if (Nums[j] > Nums[i]) 
            {
                Counts[i] = max(Counts[i], Counts[j] + 1);
            }
        }
        max_length = max(max_length, Counts[i]); 
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        cin >> Nums[i];
    }

    DP();

    cout << max_length; 

    return 0;
}
