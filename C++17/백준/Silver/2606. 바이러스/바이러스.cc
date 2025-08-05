#include <cstdio>
#include <vector>

using namespace std;

vector <int> graph[100+3];
vector <int> visited = {0,  };
int cnt = -1;
void dfs(int node){
    visited[node] = 1;
    //printf("%d ", node);
    cnt++;
    for (int i = 0; i<graph[node].size();i++){
        int next = graph[node][i];
        if (visited[next] == 0) dfs(next);
    }
}

int main(){
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    visited.assign(N+1, 0);

    for (int i = 0; i<M; i++){
        int a = 0, b=0;
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);

    printf("%d", cnt);
}