//아이디어 - 만약 진약수가 1개 - 그거 제곱
// 아니면 sort해서 젤 작은거 * 젤 큰거
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long> v;
int main(){
    long long N;
    scanf("%lld", &N);

    for (long long i = 0; i<N; i++){
        long long x;
        scanf("%lld", &x);
        v.push_back(x);
    }

    long long answer;
    if (N == 1) {
        answer = v[0] * v[0];
    }

    else{
        sort(v.begin(), v.end());
        answer = v[0] * v[N-1];
    }
    
    printf("%lld", answer);

}