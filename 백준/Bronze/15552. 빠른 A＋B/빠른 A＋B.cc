#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int x, y;
    cin >> n;
    for (; n > 0; n--)
    {
        cin >> x >> y;
        cout << x + y << "\n";
    }


    return 0;
}