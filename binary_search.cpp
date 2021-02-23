#include<iostream>
using namespace std;

double f(double x){
    return 4*x;
}

double searching(double y){
    double l = 0; double r = 1e9;
    double eps = 1e-8;
    while(r-l>eps){
        double m = (r+l)/2;
        if(f(m) < y)
            l = m;
        else
            r = m;
        cout<<m<<endl;
    }

    return l;
}
main()
{
    double n;
    cin>>n;
    cout<<searching(n);
}
