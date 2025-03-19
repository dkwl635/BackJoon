#include <iostream>
#include <vector>

using namespace std;

int N, S;
int result;
vector<int> input;

void BackTracking(int index, int hop)
{
    if (hop == S)
    {
        ++result;
    }
    
    if (index == N)
    {
        return;
    } 
   

    for (int i = index; i < N; ++i) 
    {
        BackTracking(i + 1, hop + input[i]);
    }

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> S;
    input = vector<int>(N);
    result = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> input[i];
    }

    BackTracking(0, 0);

    if (S == 0) { --result; }

    cout << result;


    return 0;
}