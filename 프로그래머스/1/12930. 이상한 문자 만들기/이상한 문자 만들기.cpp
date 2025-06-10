#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int numbering = 0;
    
    for(int i = 0; i<s.size(); i++){  
        
        if(isspace(s[i])){
            numbering = 1;
        }
        
        if(numbering % 2 == 0){
            answer += toupper(s[i]);
        }
        else{
            answer += tolower(s[i]);       
        }
        numbering++;
    }
    
    return answer;
}