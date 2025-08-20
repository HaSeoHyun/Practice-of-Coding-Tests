#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> v) {
    
    int offset = 1;
    while (offset<v.size()) offset = offset*2;
    vector<long long> indexTree(2*offset,1);
    for (int i = 0; i<v.size(); i++){
        indexTree[offset+i] = v[i];
    }
    
    for (int i = offset-1; 0<i; i--){
        indexTree[i] = lcm(indexTree[i*2], indexTree[i*2+1]);
    }
    int answer = indexTree[1];
    return answer;
}