#include <string>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int N = progresses.size();
    vector<int> answer;
    vector<int> left(N);
    vector<int> days(N);
    
    for (int i = 0; i<N; i++){
        left[i] = 100 - progresses[i];
    }
    
    //남은 날짜 배열 days 만들기 
    for (int i = 0; i<N; i++){
        if (left[i] % speeds[i] != 0){
            days[i] = left[i]/speeds[i]+1;
        }
        else{
            days[i] = left[i]/speeds[i];
        }
    }
    
    int current_day = days[0];
    int cnt = 1;
    
    for (int i = 1; i<N; i++){
        if (days[i] <= current_day){
            cnt++;
        }
        else{
            answer.push_back(cnt);
            cnt = 1;
            current_day = days[i];
        }
    }
    answer.push_back(cnt);
    
    return answer;
}