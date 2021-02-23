#include<iostream>
#include<algorithm>
using namespace std;

int bin(int *a, int val, int n){
    int l = 0 , r = n;
    while(r-l> 1){
        int m = (l+r)/2;
        if(a[m] > val)
            r = m;
        else
            l = m;
    }
    return l;

}
main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int v;
    cin >> v;

    sort(a, a+n);
    cout << bin(a, v, n);
}
