#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n , x , y;
    
    cin >> n >> x;
    for(int i = 0 ; i < n; i++)
    {
        cin >> y;
        if( y < x) cout << y << " ";
    }
    
    return 0;
}