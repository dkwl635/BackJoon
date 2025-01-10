#include <iostream>

using namespace std;
int main()
{
    int battle = 0;
     int a = 0, b = 0;   
    cin >> battle;
    for(int i = 0 ; i < battle ; i++)
    {
        int A , B;
        cin >> A >> B;
        if( A == B ){continue;}
        if(A > B) {a++;}
        else {b++;}
    
    }
   cout << a << " " << b;
    
    return 0;
}