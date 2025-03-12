#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<int> S;
    vector<char> result;
    int now = 1;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;

        if (S.empty())
        {
            S.push(now);
            ++now;
            result.push_back('+');
        }

        if (S.top() == x)
        {
            S.pop();
            result.push_back('-');
            continue;
        }


        while (S.top() < x)
        {
            S.push(now);           
            result.push_back('+');
            ++now;
        }
        
    
        if (S.top() == x)
        {
            S.pop();
            result.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
       
       
    }

    for (char c : result)
    {
        cout << c << "\n";
    }


}