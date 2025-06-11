#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == ' '){
            s[i] = ' ';
        }else{   
            if(s[i] + n > 'z'){
                s[i] += n - ('z'-'a'+1);
            }
            else if(s[i] >= 'A' && s[i] <= 'Z' && s[i] + n > 'Z'){
                s[i] += n - ('Z'-'A'+1);
            }
            else{
                s[i] = s[i] + n;
            }
        }
    }
    answer = s;
    
    return answer;
}

//char형으로 하나씩 자름
//하나씩 받은 char를 정수형으로 밀어야되는 수만큼 더하여 다시 char로 뽑아냄
//공백은 예외처리