#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    printf("%d ", v[0]);
    for (int i = 1; i<v.size(); i++){
        if (v[i] != v[i-1]) printf("%d ", v[i]);
    }
}