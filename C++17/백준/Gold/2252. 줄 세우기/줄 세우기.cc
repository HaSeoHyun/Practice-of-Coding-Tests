#include <cstdio>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector <int> graph[32000+3];
int degree[32000 + 3]; //노드별 차수 저장하기 - 차수가 0이면 덱에 넣음 
deque <int> dq;

int main() {
	//학생 수  N명, 케이스 수 M개
	int N, M;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		degree[b]++;
	}


	for (int i = 1; i <= N; i++) {
		if (degree[i] == 0) {
			dq.push_back(i);
		}
	}

	while (!dq.empty()) {
		int curr = dq.front();
		printf("%d ", curr);
		dq.pop_front();

		for (int i = 0; i < graph[curr].size(); i++) {
			int next = graph[curr][i];
			degree[next]--;

			if (degree[next] == 0) dq.push_back(next);
		}
	}
	//system("pause");
}