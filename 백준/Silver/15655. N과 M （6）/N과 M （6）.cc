#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Num;
vector<int> V;

int n, m;
void S(int count)
{
    if (V.size() == m)
    {
        for (int i : V)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = count; i < n; i++)
    {    
            V.push_back(Num[i]);
            S(i + 1);
            V.pop_back();
           
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        Num.push_back(x);
    }

    sort(Num.begin(), Num.end());


    
    S(0);



    return 0;
}