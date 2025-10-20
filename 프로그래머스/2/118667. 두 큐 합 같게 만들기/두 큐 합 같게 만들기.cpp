#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {

    long long sum1 = accumulate(queue1.begin(), queue1.end(), 0LL);
    long long sum2 = accumulate(queue2.begin(), queue2.end(), 0LL);
    long long total = sum1 + sum2;

    if (total % 2 != 0) return -1;

    long long target = total / 2;

    int n = queue1.size();
    vector<int> merged;
    merged.reserve(2 * n);
    merged.insert(merged.end(), queue1.begin(), queue1.end());
    merged.insert(merged.end(), queue2.begin(), queue2.end());

    int left = 0;
    int right = n;
    long long current = sum1;
    int moves = 0;
    int maxMoves = n * 3;

    while (left < 2 * n && right < 2 * n && moves <= maxMoves) {
        if (current == target)
            return moves;

        if (current < target) {
            current += merged[right];
            right++;
        } else {
            current -= merged[left];
            left++;
        }
        moves++;
    }

    return -1;

}