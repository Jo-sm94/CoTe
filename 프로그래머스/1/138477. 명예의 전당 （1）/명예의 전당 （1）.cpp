#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> tmp;
    
    for(auto it = score.begin(); it != score.end(); ++it){
     
        tmp.push_back(*it);
        sort(tmp.begin(), tmp.end(), greater<>());
        if(tmp.size() > k) tmp.erase(tmp.begin()+k, tmp.end());
        
        answer.push_back(*min_element(tmp.begin(), tmp.end()));
    }

    return answer;
}
