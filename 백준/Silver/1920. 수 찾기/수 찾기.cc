#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n ,x;
    unordered_map<int , int> hash_map;
    
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> x;
        hash_map[x] = 1;
    }
    
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> x;
        if( hash_map[x] == 1)
        {
            cout << 1 ;
        }
        else
        {
            cout << 0 ;
        }
        
        cout << "\n";
    }
    
    return 0;
}