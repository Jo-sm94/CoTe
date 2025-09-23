#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    string s;
    
    for(char digit : number)
    {
        while(!s.empty() && k > 0 && s.back() < digit)
        {
            s.pop_back();
            k--;
        }
        
        s.push_back(digit);
    }
    
    if (k > 0) {
        s.erase(s.end() - k, s.end());
    }
    
    answer = s;
    return answer;
}