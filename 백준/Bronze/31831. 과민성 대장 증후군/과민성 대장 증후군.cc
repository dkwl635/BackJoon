#include <iostream>

using namespace std;

int main()
{
    int N , M;
    cin >> N >> M;
    int currentM = 0;
    int answer = 0;
    for(int i = 0 ; i < N ; i++)
    {
        int stress;
        cin >> stress;
        
        currentM += stress;
        if(currentM < 0) {currentM  = 0;}
        if(currentM >= M) {answer++;}
    }
    
    cout << answer;
    
    return 0;
}