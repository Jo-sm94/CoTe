#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(char c1 : s){
        for(int i = 1; i<=index; i++){
            c1 += 1;
            if(c1 > 122) c1 -= 26;
            while(skip.find(c1) != string::npos){
                c1 += 1;
                if(c1 > 122) c1 -= 26;
            }
        }
        answer += c1;
    }
    
    return answer;
}