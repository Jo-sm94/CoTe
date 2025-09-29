#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    
    int dRow[3] = {1, 0, -1};
    int dCol[3] = {0, 1, -1};
    int dir = 0;
    
    int row = 0;
    int col = 0;
    int num = 1;
    int maxNum = n * (n + 1) / 2;
    
    while(num <= maxNum)
    {
        arr[row][col] = num;
        num++;
        
        int nRow = row + dRow[dir];
        int nCol = col + dCol[dir];

        if (nRow < 0 || nRow >= n || nCol < 0 || nCol >= n || arr[nRow][nCol] != 0) {
            dir = (dir + 1) % 3;
            nRow = row + dRow[dir];
            nCol = col + dCol[dir];
        }
        
        row = nRow;
        col = nCol;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            answer.push_back(arr[i][j]);
        }
    }
    
    return answer;
}