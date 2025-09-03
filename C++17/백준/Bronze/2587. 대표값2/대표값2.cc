#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;
int main(){
    for (int i = 0; i<5; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int k:v) sum+=k;
    int mean = sum/v.size();
    printf("%d\n%d", mean, v[2]);
}