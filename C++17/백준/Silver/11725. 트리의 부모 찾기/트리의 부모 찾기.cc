//그 "바로 위 부모"를 출력하면 됨
#include <cstdio>
#include <vector>

using namespace std;

vector<int> v[100000+3];
int parent[100000+3];
bool visited[100000+3];

void dfs(int node){
    visited[node] = true;
    for (int nxt : v[node]){
        if (!visited[nxt]){
            parent[nxt] = node;
            dfs(nxt);
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);

    //그래프 만들기 
    for (int i = 1; i<N; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[b].push_back(a);
        v[a].push_back(b);
    }

    dfs(1);

    for (int i = 2; i<=N; i++){
        printf("%d\n", parent[i]);
    }
}