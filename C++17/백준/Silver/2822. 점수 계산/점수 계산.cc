#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> score;

int main(){
    score.push_back(0);
    for (int i = 1; i<=8; i++){
        int x;
        scanf("%d", &x);
        score.push_back(x);
    }

    vector<int> new_vec = score;
    vector<int> ans;
    sort(score.begin(), score.end());
    int sum = 0;

    for (int i = 4; i<=8; i++){
        for (int j = 1; j<= 8; j++){
            if (score[i] == new_vec[j]){
                sum += score[i];
                ans.push_back(j);
                break;
            }   
        }
        
    }
    printf("%d\n", sum);
    sort(ans.begin(), ans.end());
    for (int i = 0; i<ans.size(); i++){
        printf("%d ", ans[i]);
    }
}