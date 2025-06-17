#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<>());
    
    for(int i = 0; i < score.size()/m; i++){
        vector<int> tmp;
        copy(score.begin()+(i*m), score.begin()+(i*m)+m, back_inserter(tmp));
        
        answer += tmp[m-1]*m;
    }
    
    return answer;
}
