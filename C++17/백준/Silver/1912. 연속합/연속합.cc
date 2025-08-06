#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> dp(100000+3);

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}

    dp[0] = v[0];
    int answer = dp[0];

    if (n>=2){
        for (int i = 1; i<n; i++){
            dp[i] = max((dp[i-1]+v[i]), v[i]);
            answer = max(answer, dp[i]);
        }
    }
    printf("%d", answer);
}

