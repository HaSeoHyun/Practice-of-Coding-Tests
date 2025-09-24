#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int answer = v[K-1];
    printf("%d", answer);
}