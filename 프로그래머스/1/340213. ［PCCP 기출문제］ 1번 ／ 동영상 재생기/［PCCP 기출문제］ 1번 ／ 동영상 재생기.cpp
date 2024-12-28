#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int int_video_lne = stoi(video_len.substr(0,2)) * 60 + stoi(video_len.substr(3,2));
    int int_pos = stoi(pos.substr(0,2)) * 60 + stoi(pos.substr(3,2));
    int int_op_start = stoi(op_start.substr(0,2)) * 60 + stoi(op_start.substr(3,2));
    int int_op_end = stoi(op_end.substr(0,2)) * 60 + stoi(op_end.substr(3,2));
    
    
    if(int_pos >= int_op_start &&  int_pos < int_op_end)
    {
        int_pos = int_op_end;
    }
    
    for(string command : commands)
    {      
        if(command == "next")
        {
            int_pos += 10;
        }
        else if(command == "prev")
        {
            int_pos -= 10;
        }
        
     
        
        if(int_pos < 0){int_pos = 0;}
        if(int_pos > int_video_lne){int_pos = int_video_lne;}
        
           if(int_pos >= int_op_start &&  int_pos < int_op_end)
        {
            int_pos = int_op_end;
        }
    }
    
    if(int_pos == 0)
    {
     return "00:00";   
    }
    
    string min = to_string(int_pos / 60);
    string minute = to_string(int_pos % 60);
    
    if(min.size() == 1) { min = "0"+ min;}
    if(minute.size() == 1) { minute = "0"+ minute;}
    
    return min + ":" +minute;
}