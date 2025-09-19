#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    queue<int> mainCon; //메인 컨테이너 벨트
    stack<int> subCon; //보조 컨테이너 벨트
    
    for(int i = 1; i <= order.size(); ++i)
    {
        mainCon.push(i);
    }
    
    for(int i : order) {
        while(true) {
            if(!mainCon.empty() && i == mainCon.front()) {
                answer++;
                mainCon.pop();
                break;
            }

            if(!subCon.empty() && i == subCon.top()) {
                answer++;
                subCon.pop();
                break;
            }

            if(mainCon.empty()) return answer;

            subCon.push(mainCon.front());
            mainCon.pop();
        }
    }
    
    return answer;
}