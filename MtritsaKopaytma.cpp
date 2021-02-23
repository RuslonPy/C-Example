#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n][n] , b[n][n], c[n][n];

    for(int i = 0; i < n-1; i ++){
        for(int j = 0; j < n-1; j++){
            cin >> a[i][j];
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < n-1; i ++){
        for(int j = 0; j < n-1; j ++){
            c[i][j] = 0.0;
            for(int k = 0; k < n-1; k ++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n-1; i ++){
        for(int j = 0; j < n-1; j++){
            cout << c[i][j];
        }
        cout << endl;
    }
}
