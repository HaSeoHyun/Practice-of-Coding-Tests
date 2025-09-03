#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> not_seen;
vector<string> not_heard;
vector<string> answer;
int main(){
    int N, M;
    cin >> N >> M;

    for (int i = 0; i<N; i++){
        string s;
        cin >> s;
        not_seen.push_back(s);
    }

    for (int i = 0; i<M; i++){
        string s;
        cin >> s;
        not_heard.push_back(s);
    }
    sort(not_seen.begin(), not_seen.end());
    sort(not_heard.begin(), not_heard.end());

    //투포인트로 가능
    int idx_seen = 0;
    int idx_heard = 0;

    while (idx_seen < N && idx_heard < M){
        if (not_seen[idx_seen] == not_heard[idx_heard]){
            answer.push_back(not_seen[idx_seen]);
            idx_seen++;
            idx_heard++;
        }
        else if (not_seen[idx_seen] < not_heard[idx_heard]){
            idx_seen++;
        }
        else idx_heard++;
    }
    cout << answer.size() << '\n';
    for (string s:answer) cout << s << '\n';
}