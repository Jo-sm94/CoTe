#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(int i = 0; i < targets.size(); i++){
        int tmp=0;
        
        for(char c : targets[i]){
            int pushNum = 101;
            
            for(int j = 0; j < keymap.size(); j++){
                int non = keymap[j].find(c);  
                if(non != string::npos){
                    pushNum = min(non+1, pushNum);
                }
            }
            if(pushNum == 101){
                tmp = -1;
                break;
            }
            tmp += pushNum;
        }
        answer.push_back(tmp);
    }
    
    return answer;
}