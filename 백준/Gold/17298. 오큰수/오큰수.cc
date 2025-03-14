#include <iostream>
#include <stack>
#include <vector>



using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    int max = 0;

    vector<int> result , input;
    cin >> n;

    result = vector<int>(n);
    input = vector<int>(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];     
    }

    stack<int> S;
    int index = n - 1;
    for (int i = n - 1; i >= 0; --i)
    {
        int A = input[i];
        while (!S.empty() && A >= S.top())
        {
            S.pop();
        }

        if (S.empty())
        {
            result[i] = -1;
        }
        else
        {
            result[i] = S.top();
        }

        S.push(A);
        
    }

    for (int i : result)
    {
        cout << i << ' ';
    }

    return 0;
}
