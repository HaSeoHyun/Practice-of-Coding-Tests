#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

#define ABS(x) (((x)<0)? (-(x)) : (x))  
#define INF 99999; // 최소값 비교를 위해 충분히 큰 수를 선언한다.

using namespace std;

typedef pair<int, int> pii;
vector<pii> chickenList;
vector<pii> houseList;
int N, M;
int ans = INF;


int cal_dist(const vector<pii>& active_shops) {
    int total_dist = 0;

    for (const auto& house : houseList) {
        int single_house_dist = INF; // 각 집의 최소거리도 INF로 초기화

        for (const auto& chicken : active_shops) {
            int dist = ABS(house.first - chicken.first) + ABS(house.second - chicken.second);
            single_house_dist = min(single_house_dist, dist);
        }
        total_dist += single_house_dist;
    }
    return total_dist;
}

void solve(int start_index, vector<pii>& selected_shops) {
    if (selected_shops.size() == M) {
        int current_dist = cal_dist(selected_shops); 
        ans = min(ans, current_dist);
        return;
    }

    // 더 이상 선택할 수 있는 치킨집이 없을 때 종료
    if (start_index >= chickenList.size()) {
        return;
    }

    for (int i = start_index; i < chickenList.size(); ++i) {
        selected_shops.push_back(chickenList[i]);
        solve(i + 1, selected_shops);
        selected_shops.pop_back();
    }
}

int main(){ 
    scanf("%d %d", &N, &M);

    int val;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            scanf("%d", &val);
            if (val == 2) chickenList.push_back(pii(i,j));
            else if (val == 1) houseList.push_back(pii(i,j));
        }
    }
    
    vector<pii> sel_shops;
    solve(0, sel_shops);

    printf("%d\n", ans);
    return 0;
}