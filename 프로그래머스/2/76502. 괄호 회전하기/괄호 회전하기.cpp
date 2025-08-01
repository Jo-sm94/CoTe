#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        string tmp = s.substr(i) + s.substr(0, i);
        stack<char> st;
        bool check = true;
        
        for(char c : tmp)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if(st.empty())
                {
                    check = false;
                    break;
                } 
                if ((c == ')' && st.top() != '(') ||
                    (c == ']' && st.top() != '[') ||
                    (c == '}' && st.top() != '{')) 
                {
                    check = false;
                    break;
                }
                
                st.pop();
            } 
        }
        
        if(check && st.empty())
        {
            answer++;
        } 
    }
    
    return answer;
}