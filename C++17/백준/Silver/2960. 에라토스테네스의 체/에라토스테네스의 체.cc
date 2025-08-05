#include <cstdio>
#include <vector>

using namespace std;

int main() {
	
	int N, K;
	scanf("%d %d", &N, &K);

	int cnt = 0;
	
	vector<int> v(N+1);

	for (int i = 2; i <= N; i++) {
		v[i] = i;
	}
	int ans;
	for (int i = 2; i <= N; i++) {
		if (v[i] == 0) continue;
		for (int j = i; j <= N; j += i) {
			if (v[j] != 0) {
				ans = v[j];
				v[j] = 0;
				cnt++;
			}
			if (cnt == K) {
				printf("%d", ans);
				break;
			}
		}
	}
	return 0;
}