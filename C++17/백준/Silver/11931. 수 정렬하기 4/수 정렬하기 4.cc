#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

vector<int> v;
int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<>());

    for (int x:v) printf("%d\n", x);
}