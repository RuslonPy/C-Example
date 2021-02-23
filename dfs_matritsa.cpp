#include<iostream>

using namespace std;

char a[1000][1000];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n , m;
bool used[1000][1000];
void dfs(int x, int y){

    used[x][y] = true;
    for(int i = 0; i < 4; i ++){
            int tx = x + dx[i], ty = y + dy[i];
            if(tx >= 0 and tx < n and ty >= 0 and ty < m and a[tx][ty] != '#' and !used[tx][ty]){
                dfs(tx,ty);
            }
    }
}
 main()
 {

        int  x, y, c, b;
        cin >> n >> m;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                if(a[i][j] == 's')
                    x = i,
                    y = j;
                if(a[i][j] == 'f' )
                    c = i,
                    b = j;
            }
        }

        dfs(x, y);

        if(used[c][b])
            cout << "yes";
        else cout <<"no";
 }
