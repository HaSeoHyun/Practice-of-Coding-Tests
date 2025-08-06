#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

#define INF 999999

//방향 배열
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0,-1, 1 };

int main() {
	int cnt = 0;

	while (1) {
		cnt++;
		int cmd;
		scanf("%d", &cmd);
		
		if (cmd == 0) break; //종료 조건

		int basic[125 + 3][125 + 3] = { 0, };
		int dist[125 + 3][125 + 3]; //최단거리 테이블 

		for (int i = 0; i < cmd; i++){
			for (int j = 0; j < cmd; j++) {
				scanf("%d", &basic[i][j]);  //동굴 만들기 
				dist[i][j] = INF; //거리 정보도 겸사겸사 같이 입력 
			}
		}
		//					비용, <x좌표, y좌표>, 최소 힙으로 만들기 
		priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

		//다익스트라를 위한 시작점 설정
		dist[0][0] = basic[0][0];
		pq.push({dist[0][0], {0,0}});

		while (!pq.empty()) {
			int cost = pq.top().first; //비용 정의 
			int x = pq.top().second.first;
			int y = pq.top().second.second;
			pq.pop();  //저장했으니 이제 빼자 

			if (cost > dist[x][y]) continue;

			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx < 0 || nx >= cmd || ny < 0 || ny >= cmd) continue;

				int new_cost = cost + basic[nx][ny];

				// 새 비용이 기존 비용보다 작으면 갱신
				if (new_cost < dist[nx][ny]) {
					dist[nx][ny] = new_cost;
					pq.push({ new_cost, {nx, ny} });
				}
			}
		}
		printf("Problem %d: %d\n", cnt, dist[cmd - 1][cmd - 1]);
	}
}