#include <iostream>
#include <vector>

using namespace std;

vector<int> V;
vector<bool> visited;
int n, m;
void S()
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

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;

            V.push_back(i);
            S();
            V.pop_back();
            visited[i] = false;

        
        }

       
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    visited = vector<bool>(n + 1, false);
    S();



    return 0;
}