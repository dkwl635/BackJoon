#include <iostream>
using namespace std;

int hop[12];
void dp()
{
    hop[1] = 1;
    hop[2] = 2;
    hop[3] = 4;

    for (int i = 4; i < 12; ++i)
    {
        hop[i] = hop[i - 1] + hop[i - 2] + hop[i - 3];
    }
}
int main()
{
    int T, n;
    cin >> T;
    dp();
    for (int i = 0; i < T; ++i)
    {
        cin >> n;
        cout << hop[n] << "\n";
    }

    return 0;
}