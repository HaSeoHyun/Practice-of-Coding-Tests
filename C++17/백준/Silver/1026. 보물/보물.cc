#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> A;
vector<int> B;

int main() {
	int N;
	int answer = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int x;
		scanf("%d", &x);
		A.push_back(x);
	}
	for (int i = 0; i < N; i++) {
		int y;
		scanf("%d", &y);
		B.push_back(y);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());
	for (int i = 0; i < N; i++) {
		answer += (A[i] * B[i]);
	}
	printf("%d", answer);
	//system("pause");
}