#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool b = true;
    
    for(int i = 0; i < numbers.size()-1; i++){  
        for(int j = i+1; j< numbers.size(); j++){
            int num = numbers[i] + numbers[j];

            for(int k = 0; k<= answer.size(); k++){
                if(answer.empty()){
                    b = true;
                }
                else if(answer[k] == num){
                    b = false;
                    break;
                }
                else{
                    b = true;
                }
            }
            if(b) answer.push_back(num);
        }
    }
    sort(answer.begin(), answer.end(), less<int>());
    
    return answer;
}