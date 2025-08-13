#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> word;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    for (int i = 0; i<N; i++){
        string S;
        cin >> S;

        if (S.length() >= M) word[S]++;
    }

    vector<pair<string, int>> vec(word.begin(), word.end());

    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){
        if (a.second != b.second) return a.second > b.second; //빈도순

        if (a.first.length() != b.first.length()) return a.first.length() > b.first.length();
        return a.first < b.first;
    });
    for (auto &p:vec){
        cout << p.first << '\n';
    }
}