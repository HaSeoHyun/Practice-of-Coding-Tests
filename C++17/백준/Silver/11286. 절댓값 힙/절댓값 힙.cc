#include <cstdio>
#include <queue>
#include <cmath>

using namespace std;

struct compare{
    bool operator()(int o1, int o2){
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs){
            return o1 > o2;
        }
        else{
            return first_abs > second_abs;
        }
    }
    
};

priority_queue <int, vector<int>, compare> pq;

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);

        if (x == 0){ 
                //배열에서 절댓값이 가장 작은 값 출력
                if (pq.empty()){
                    printf("0\n");
                }
                else{
                    printf("%d\n", pq.top());
                    pq.pop();
                }
                //그 값을 배열에서 제거
        }
        else{
            pq.push(x);
        }
    }
}
