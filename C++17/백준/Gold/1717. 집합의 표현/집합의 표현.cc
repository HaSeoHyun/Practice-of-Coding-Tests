#include <cstdio>
#include <vector>

using namespace std;

int parent[1000000+1];

//x의 부모를 return하는 함수 
int SearchP(int x){
    if (x == parent[x]){
        return x;
    }
    else{
        return parent[x] = SearchP(parent[x]);
    }
}

//a가 있는 집합에 b를 합침 
void add(int a, int b){
    a = SearchP(a); //최상위에 연결하기 위해 
    b = SearchP(b);  

    if (a<b) parent[b] = a;  //b의 parent는 a다 
    else parent[a] = b;  //b가 더 크다면 b의 부모는 a 
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i<=n; i++){
        parent[i] = i;
    }

    for (int i = 0; i<m; i++){
        int cmd, a, b;
        scanf("%d %d %d", &cmd, &a, &b);
        if (cmd == 0){  //합칠 때 
            add(a,b);
        }

        if (cmd == 1) {
            if (SearchP(a) == SearchP(b)){
                printf("YES\n");
            }
            else printf("NO\n");
        }
    }
}