#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> scores) {
    int answer = 1;
    
    vector<int> wanho = scores[0];
    
    for(int i = 0; i<wanho.size(); ++i)
    {
        cout << wanho[i] << endl;
    }
    
    // 1. 정렬: 태도 내림차순, 동료 오름차순
    sort(scores.begin(), scores.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    });

    // 2. 탈락자 판별 (O(n))
    int max_y = 0;
    vector<vector<int>> survivals;

    for (auto& emp : scores) {
        if (emp[1] < max_y) {
            if (emp == wanho) return -1; // 완호 탈락
        } else {
            max_y = max(max_y, emp[1]);
            survivals.push_back(emp);
        }
    }

    // 3. 완호 등수 계산
    int wanho_sum = wanho[0] + wanho[1];

    for (auto& emp : survivals) {
        if (emp[0] + emp[1] > wanho_sum) answer++;
    }
    
    return answer;
}