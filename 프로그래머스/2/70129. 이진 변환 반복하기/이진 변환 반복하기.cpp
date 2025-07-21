#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(s != "1")
    {
        string temp="";
        int remove=0;
        
        for(char c : s)
        {
            if (c == '0') remove++;
        }
        
        int bitCnt = s.length() - remove;
        s = "";
        
        while (bitCnt > 0) {
            s = (bitCnt % 2 == 0 ? "0" : "1") + s;
            bitCnt /= 2;
        }

        answer[0]++;
        answer[1] += remove;
        
    }
    
    return answer;
}