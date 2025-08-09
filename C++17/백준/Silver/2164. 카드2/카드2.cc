#include <cstdio>
#include <deque>

using namespace std;
deque<int> dq;

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 1; i<=N; i++){
        dq.push_back(i);
    }

    while (dq.size() > 1){
        dq.pop_front();
        int x = dq[0];
        dq.pop_front();
        dq.push_back(x);
    }
    printf("%d", dq[0]);
}