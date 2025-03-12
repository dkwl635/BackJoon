#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    

    if (n == 1)
    {
        cout << "0";
        return 0;
    }

    //타워 정보 저장
    stack<pair<int , int>>tower;
    
    vector<int>result(n, 0);
    int intdex = 0;
    for (int i = 0; i < n; ++i)
    {
        int l = 0;
        cin >> l;

        if (tower.empty())
        {
            result[i] = 0;
        }

        while (!tower.empty())
        {
            pair<int, int> preL = tower.top();
            if (preL.first > l)
            {
                result[i] = preL.second;
                break;
            }
            else
            {
                tower.pop();
            }

        }

        tower.push({l , i + 1});
        
       
    }

   


    for (int i : result)
    {
        cout << i << " ";
    }



    return 0;
}

