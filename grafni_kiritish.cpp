#include<bits/stdc++.h>

using namespace std;
vector<int> G[100];
bool used[100];

void dfs(int v){
    used[v] = 1;
    for(int i = 0; i < G[v].size(); i ++){
        if(!used[G[v][i]])
            dfs(G[v][i]);
    }
}

main()
{
    // ostrowlarni sanash
    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i = 0; i < m; i ++){
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i ++){
        if(!used[i]){
            cnt ++;
            dfs(i);
        }
    }
    cout << cnt;
}
