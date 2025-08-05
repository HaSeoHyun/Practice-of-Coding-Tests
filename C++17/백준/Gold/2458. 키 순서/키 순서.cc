#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> higher[500+3]; //기준 노드보다 큰 인원 세리기 
vector<int> lower[500+3]; // 기준보다 작은 인원 세리기 
vector<int> check(503);
int total = 0;//나보다 작거나 큰 학생 수를 저장할 변수 

int dfs(vector <int> v[], int start) {
	int cnt = 0;
	check[start] = 1;
	for (int i = 0; i < v[start].size(); i++) {
		int x = v[start][i];
		if (check[x] == 0) {
			check[x] = 1;
			cnt++;
			cnt+=dfs(v, x);
		}
	}
	return cnt;
}

int main() {
	int N, M;  // N: 학생 수,  M: 비교 횟수
	scanf("%d %d", &N, &M);

	int answer = 0;

	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);  //a가  b보다 작다 
		higher[b].push_back(a);   //b 보다 작은  a
		lower[a].push_back(b); 
	}

	for (int i = 1; i < N+1; i++) {
		int x = 0, y=0;
		fill(check.begin(), check.end(), 0);
		x = dfs(higher, i); 
		fill(check.begin(), check.end(), 0);
		y = dfs(lower, i);
		//printf("\n");
		//printf("%d보다 작은 거 개수: %d 이거보다 큰 거 개수 %d\n",i, x, y);
		if ((x + y) == (N - 1)) answer++;
	}
	printf("%d", answer);
	//system("pause");
}