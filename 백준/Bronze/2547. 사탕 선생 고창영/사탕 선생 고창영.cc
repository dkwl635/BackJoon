#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    vector<string> answer;
    
    for(int i = 0 ; i < T ; i++)
    {
        int Student = 0;
        long long Candy = 0;
        cin >> Student;
        for(int j =0 ; j < Student ; j++)
        {
            long long a;
            cin >> a;
            Candy = (Candy + a) % Student;
        }
        
        if(Candy == 0)
        {
            answer.push_back("YES");
        }
        else
        {
            answer.push_back("NO");
        }
    }
    
    for(string str : answer)
    {
        cout << str << endl;
    }
    
    return 0;
}