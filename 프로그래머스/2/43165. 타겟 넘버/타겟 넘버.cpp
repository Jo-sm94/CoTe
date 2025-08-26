#include <string>
#include <vector>

using namespace std;

void dfs(int top,int stack, vector<int> const &numbers, int const &target, int &answer){
    if(stack==numbers.size()){
        if(top==target)
        {
            answer++;
        }
        return;
    }

    dfs(top+numbers[stack],stack+1,numbers,target,answer);
    dfs(top-numbers[stack],stack+1,numbers,target,answer);
}

int solution(vector<int> numbers, int target) {
    int answer=0;
    dfs(0,0,numbers,target,answer);
    return answer;
}