#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int splitNum = 0;
    bool check = true;
    
    while(check){
        int a = 1;
        int b = 0;
        for(int i = splitNum+1; i <= s.length(); i++){
            if(s[splitNum] == s[i]){
                a++;
            }else{
                b++;
            }
            if(a==b){
                answer++;
                splitNum = i+1;
                break;
            }
            if(i == s.length()){
                answer++;
                splitNum = s.length();
            }
        }
        
        if(splitNum+1 > s.length()){
            check = false;
        }
    }
    
    return answer;
}