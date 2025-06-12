#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i = 0; i < commands.size(); i++){
        vector<int> tmpArr;
        copy(array.begin()+commands[i][0]-1, array.begin()+commands[i][1], back_inserter(tmpArr));
        
        sort(tmpArr.begin(), tmpArr.end(), less<int>());
        
        answer.push_back(tmpArr[commands[i][2]-1]);
    }
    
    return answer;
}