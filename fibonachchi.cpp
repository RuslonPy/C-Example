#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n+1];
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i = 1; i <= n; i ++){
        if(max < a[i])
            max = a[i];
    }
    for(int i = 1; i <= n; i ++){
        a[i] /= max;
    }
    for(int i = 1; i <= n; i ++){
        cout << a[i] << " ";
    }
}
