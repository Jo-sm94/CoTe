#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int tmp = 0;

	
	for (int i = 0; i < section.size(); i++) {
		if (section[i] >= tmp) {
			tmp = section[i] + m;
			answer++;
		}
	}
    
    return answer;
}