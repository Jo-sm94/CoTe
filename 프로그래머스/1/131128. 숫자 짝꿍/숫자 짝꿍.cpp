#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    for(int i = 9; i>=0; i--){
        int c1 = count(X.begin(), X.end(), (char)(i+48));
        int c2 = count(Y.begin(), Y.end(), (char)(i+48));
        answer.append(min(c1, c2), (char)(i+48));
    }
    
    if(answer.empty()){
        answer = "-1";
    }else if(answer.front() == '0'){
        answer = "0";
    }
    
    return answer;
}