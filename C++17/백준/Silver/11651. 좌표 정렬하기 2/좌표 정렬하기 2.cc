#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int,int>> v;

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(),cmp);
    for (int i = 0; i<N; i++){
        printf("%d %d", v[i].first, v[i].second);
        printf("\n");
    }
}