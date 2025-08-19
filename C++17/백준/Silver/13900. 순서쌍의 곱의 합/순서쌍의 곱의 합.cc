#include <cstdio>
#include <vector>

using namespace std;
int main(){

    /*그냥 구현한다면
    vector<int> basic;
    vector<int> v;
    
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int x = 0;
        scanf("%d", &x);
        basic.push_back(x);
    }

    for (int i = 0; i<N-1; i++){
        for (int j = i+1; j<N; j++){
            int k = basic[i]*basic[j];
            v.push_back(k);
        }
    }
    int sum = 0;
    for (int i = 0; i<v.size(); i++){
        sum += v[i];
        //printf("%d ", v[i]);
    }
    printf("%d", sum);
     */

     //시간 복잡도와 메모리 고려
    
    int N;
    scanf("%d", &N);
    vector<long long> v(N);
    long long total = 0;

    for (int i = 0; i<N; i++){
        scanf("%lld", &v[i]);
        total += v[i];
    }

    long long answer = 0;
    for (int i = 0; i<N; i++){
        total -= v[i];
        answer += v[i] * total;
    }
    printf("%lld", answer);

    return 0;
}