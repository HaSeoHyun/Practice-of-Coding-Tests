#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 0; i<T; i++){
        int N;
        scanf("%d", &N);
        vector<pair<int, int>> v;  //자료가 들어갈 벡터

        for (int j = 0; j<N; j++){
            
            int a, b;
            scanf("%d %d", &a, &b);

            v.push_back({a,b});
        }

        //정렬
        sort(v.begin(), v.end());

        //이제 second를 보는데, 그간 앞에서 min second를 기억해두고 더 작으면 ++
        int answer = 1;
        int min_second = v[0].second;

        for (int j = 1; j<N; j++){
            if (v[j].second < min_second){
                answer++;
                min_second = v[j].second;
            }
        }
        printf("%d\n", answer);

    }

}