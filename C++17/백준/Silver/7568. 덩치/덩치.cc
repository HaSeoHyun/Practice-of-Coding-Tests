#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
    vector<pair<int, int>> v;

    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back({x,y});
    }
    
    //N이 최대 50이므로 시간 문제가 없다.
    //따라서 브루트 포스로 합니다.

    for (int i = 0; i<N; i++){
        int rank = 1;
        for (int j = 0; j<N; j++){
            if ((v[i].first < v[j].first) && (v[i].second < v[j].second)){
                rank++;
            }
        }
        printf("%d ", rank);
    }

}