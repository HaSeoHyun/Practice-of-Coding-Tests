#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

priority_queue<long long, vector<long long>, less<long long>> pq;

int main(){
    int N;
    scanf("%d", &N);

    for (int u = 0; u<N; u++){
        long long x;
        scanf("%lld", &x);

        if (x == 0){
            if (!pq.empty()) {
                printf("%lld\n", pq.top());
                pq.pop();
            }
            else printf("0\n");
        }

        else{
            pq.push(x);
        }
    }
}