#include<bits/stdc++.h>
using namespace std;
int ekub(int n ,int m){
    if(n == 0){
        return m;
    }
    return ekub(m%n, n);
}
main()
{
    int n , m;
    cin >> n >> m;
    cout << ekub(n , m);
}
