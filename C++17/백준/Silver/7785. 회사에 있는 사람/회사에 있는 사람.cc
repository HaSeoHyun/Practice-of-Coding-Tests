#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;
set<string, greater<string>> attend;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        string name, status;
        cin >> name >> status;

        if (status == "enter"){
            attend.insert(name);
        }
        else if (status == "leave"){
            attend.erase(name);
        }
    }

    //sort(attend.begin(), attend.end());
    for (string x:attend) cout << x << '\n';
}