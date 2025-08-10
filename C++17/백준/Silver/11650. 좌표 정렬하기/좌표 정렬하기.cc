#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int,int>> v;

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        v.push_back({x,y});
    }

    sort(v.begin(), v.end());
    for (int i = 0; i<N; i++){
        printf("%d %d", v[i].first, v[i].second);
        printf("\n");
    }
}