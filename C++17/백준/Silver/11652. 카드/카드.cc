#include <cstdio>
#include <map>

using namespace std;
map<long long, int> cnt;

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        long long k;
        scanf("%lld", &k);

        cnt[k]++;
    }
    
    long long answer = 0;
    int cur_max = 0;

    for (auto p: cnt){
        if (p.second > cur_max){
            cur_max = p.second;
            answer = p.first;
        }
    }

    printf("%lld", answer);
}