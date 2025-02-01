#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    vector<int> answer;
    //배열 정렬
    sort(num_list.begin() , num_list.end());
    
    //앞에서 5명 빼고 나머지 가져오기
    answer.assign(num_list.begin() + 5  , num_list.end());
    
    return answer;
}