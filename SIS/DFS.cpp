#include <iostream>
#include <vector>

using namespace std;

int n, x, cnt;
int used[150];

vector<int> v[150];

void dfs(int val){
    used[val] = 1;
    for (int i = 0; i < v[val].size(); i++){
        if (used[v[val][i]] == 0){
            dfs(v[val][i]);
            cnt++;
        }
    }
}

int main(){
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int cur;
            cin >> cur;
            if (cur == 1){
                v[i].push_back(j);
            }
        }
    }
    cnt++;
    dfs(x - 1);

    cout << cnt;
    return 0;
}
