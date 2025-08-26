#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int T;
    scanf("%d", &T);

    for (int t = 0; t<T; t++){
        //이제 1개의 테스트케이스 
        int N, M;
        scanf("%d %d", &N, &M);
        vector<vector<int>> v(N+1);
  
        for (int i = 0; i<M; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            v[x].push_back(y);
            v[y].push_back(x);
        }

        printf("%d\n", N-1);
    }
}