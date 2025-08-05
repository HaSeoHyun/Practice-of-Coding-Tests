#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int Parent[1000 + 3];
vector <pair<int, pair<int, int>>> graph;

int find_Parent(int a) {
	if (Parent[a] == a) return a;
	else return (Parent[a] = find_Parent(Parent[a]));
}
void Union(int a, int b) {
	a = find_Parent(a);
	b = find_Parent(b);
	if (a < b) {
		Parent[b] = a;
	}
	else Parent[a] = b;
}

int main() {
	int N, M;
	int answer = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	//자기 자신을 연결하는 간선 만들기 (집합 관계 초기화)
	for (int i = 1; i <= N; i++) {
		Parent[i] = i;
	}

	//cmd 받기
	for (int i = 0; i < M; i++) {
		int start, end, cost;
		scanf("%d %d %d", &start, &end, &cost);
		graph.push_back({ cost, {start, end} });
	}
	sort(graph.begin(), graph.end());

	for (int i = 0; i < graph.size(); i++) {
		int weight = graph[i].first;
		int a = graph[i].second.first;
		int b = graph[i].second.second;

		if (find_Parent(a) != find_Parent(b)) {
			Union(a, b);
			answer += weight;
		}
	}
	printf("%d", answer);
}