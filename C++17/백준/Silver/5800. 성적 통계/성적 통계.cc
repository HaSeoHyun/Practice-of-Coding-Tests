#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int K, n;

    scanf("%d", &K);
    for (int i = 0; i<K; i++){
        
        scanf("%d", &n);
        vector<int> v;
        //fill(v.begin(), v.end(), 0); //딱?히 필요 없는 듯 
        
        for (int j = 0; j<n; j++){
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int gap = 0;
        for (int k= 1; k<n; k++){
            gap = max(gap, v[k]-v[k-1]);
        }
        
        printf("Class %d\n", i+1);
        printf("Max %d, Min %d, Largest gap %d\n", v[n-1], v[0], gap);        
    }
}