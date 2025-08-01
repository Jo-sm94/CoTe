#include <string>
#include <vector>
#include <numeric>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    int elementsSize = elements.size();
    
    elements.insert(elements.end(), elements.begin(), elements.end());
    
    for(int i = 1; i <= elementsSize; i++)
    {
        for(int j = 0; j < elementsSize; j++)
        {
            int sum = accumulate(elements.begin() + j, elements.begin() + j + i, 0);
            s.insert(sum);
        }
    }
    
    answer = s.size();
    
    return answer;
}