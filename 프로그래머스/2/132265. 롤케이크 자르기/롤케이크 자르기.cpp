#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    int n = (int)topping.size();
    if (n <= 1) return 0;

    int maxT = *max_element(topping.begin(), topping.end());

    vector<int> left(maxT + 1, 0);
    vector<int> right(maxT + 1, 0);

    int uniqRight = 0, uniqLeft = 0;
    for (int t : topping)
    {
        ++right[t];
        if (right[t] == 1)
        {
            ++uniqRight;
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        int t = topping[i];
        
        ++left[t];
        --right[t];

        if (left[t] == 1)  ++uniqLeft;
        if (right[t] == 0) --uniqRight; 

        if (uniqLeft == uniqRight) ++answer;
    }
      
    return answer;
}