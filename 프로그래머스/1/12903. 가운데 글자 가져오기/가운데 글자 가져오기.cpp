#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    
    if(s.length() % 2 == 0){
        cout << s.length();
        answer = s.substr((s.length()/2)-1, 2);
    }else{
        cout << s.length();
        answer = s.substr((s.length()/2), 1);
    }
    
    return answer;
}