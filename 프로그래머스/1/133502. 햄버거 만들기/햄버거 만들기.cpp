#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string s = "";
    for(int i : ingredient){
        s += to_string(i);
    }
    
    int pos = 0;
    while (true) 
    {
        int ret = s.find("1231", pos);
        if (ret == string::npos)
            break;
        s.erase(ret, 4);
        if (ret > 2)
            pos = ret - 3;
        answer++;
    }
    
    return answer;
}