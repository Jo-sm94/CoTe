#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width = 0;
    int height = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        
        if(*sizes[i].begin() >= *sizes[i].rbegin()){ 
            if(width < *sizes[i].begin()) width = *sizes[i].begin();
            if(height < *sizes[i].rbegin()) height = *sizes[i].rbegin();
        }else{
            if(height < *sizes[i].begin()) height = *sizes[i].begin();
            if(width < *sizes[i].rbegin()) width = *sizes[i].rbegin();
        }
    }
    answer = width * height;
    
    return answer;
}