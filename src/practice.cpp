#include <iostream>
#include <vector>
using namespace std;

// 规巩 眉农侩 vector
vector<vector<int>> v(20);

void dfs(int now) {
    for(int i = 0; i < v[now].size(); i++) {
        int to = v[now][i];
        cout << to;
        dfs(to);
    }
}

int main() {

    int n;

    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }; // 牢立 府胶飘 积己

    dfs(n);

    int de = 1;
    
    return 0;
}