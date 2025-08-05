#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> graph[100000+3];
int order[100000+3] = {0,};
int visited[100000+3] = {0,};
int cnt = 0;

void dfs(int start){
    visited[start] = 1;
    order[start] = ++cnt;

    for (int i = 0; i<graph[start].size(); i++){
        int next = graph[start][i];
        if (visited[next] == 0){
            visited[next] = 1;
            //printf("%d ", next);
            dfs(next);
        }
    }
}

int main(){

    int N, M, R;
    scanf("%d %d %d", &N, &M, &R);
    for (int i = 0; i<M; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i<=N; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(R);

    for (int i = 1; i<=N; i++) printf("%d\n", order[i]);
}