#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {

    //출전 가능한 학생 저장
    vector<int> student;
    //학생의 순서 기억을 위한
    map<int , int> student_Num;
    //학생과 순서 기억
    for(int i ; i < rank.size(); i++)
    {
        if(attendance[i]) { 
            student.push_back(rank[i]);
            student_Num[rank[i]] = i;
        }
    }
    //정렬
    sort(student.begin() , student.end());
    
    //abc 지정
    int a , b,c;
    a = student_Num[student[0]];
    b = student_Num[student[1]];
    c = student_Num[student[2]];    
    
    return 10000 * a + 100 * b + c;
}