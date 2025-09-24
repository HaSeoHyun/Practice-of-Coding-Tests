#include <cstdio>
#include <deque>

using namespace std;
deque<int> dq;
deque<int> answer;

int main(){
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i<=N; i++){
        dq.push_back(i);
    }

    while (!dq.empty()){
        for (int i = 1; i<=K-1; i++){
            int temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
        }
        int x;
        x = dq.front();
        //printf("%d ", x);
        answer.push_back(x);
        dq.pop_front();
    }
    printf("<");
    for (int i = 0; i<N-1; i++){
        printf("%d, ", answer[i]);
    }
    printf("%d", answer[N-1]);
    printf(">");
}