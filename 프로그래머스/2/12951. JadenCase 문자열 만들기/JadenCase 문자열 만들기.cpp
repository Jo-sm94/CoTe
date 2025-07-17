#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool start = true;

    for (char c : s) 
    {
        if (c == ' ') 
        {
            answer += c;
            start = true; 
        } 
        else 
        {
            if (start) 
            {
                answer += toupper(c);
                start = false;
            }
            else 
            {
                answer += tolower(c);
            }
        }
    }
    
    return answer;
}