#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int M , N;
vector<int> input;
vector<int> v;
vector<bool> visited;

void BackTracking(int count)
{
    if (count == M)
    {
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < input.size(); ++i)
    {
        if (!visited[i])
        {
            visited[i] = true;
            v.push_back(input[i]);
            BackTracking(count + 1);
            v.pop_back();
            visited[i] = false;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    input = vector<int>(N);
    visited = vector<bool>(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> input[i];
    }

    sort(input.begin(), input.end());
    BackTracking(0);

    return 0;
}
