#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    
    for( char c : n_str)
    {
        answer *= 10;
        answer += c - '0';
        
    }
    return answer;
}