#include<bits/stdc++.h>
using namespace std;

vector<int> G[100];
int used[100];

main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i ++){
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int start, finish;
    cin >> start >> finish;

    queue<int> q;
    q.push(start);
    used[start] = 1;

    while(!q.empty()){
        int curr = q.front();
        int curr = q.front();
        q.pop();

        for(int i = 0; i < G[curr].size(); i ++){
            int to = G[curr][i];
            if(!used[to]){
                used[to] = used[curr] + 1;
                q.push(to);
            }
        }
    }

    cout << used[finish] - 1;

}
