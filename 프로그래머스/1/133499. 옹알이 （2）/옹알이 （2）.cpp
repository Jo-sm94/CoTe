#include <string>
#include <vector>
#include <regex> 

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    regex r("^0*$");
    vector<string> talk = {"aya", "ye", "woo", "ma"};
    
    for(string s : babbling){
        for(string t : talk){
            while(s.find(t) != string::npos){
                if(s.find(t+t) != string::npos){
                    break;
                }
                int f = s.find(t);
                s.replace(s.begin()+f, s.begin()+f+t.length(), "0");
            }
        }
        if(regex_match(s, r)){
            answer++;
        }
    }
    
    return answer;
}