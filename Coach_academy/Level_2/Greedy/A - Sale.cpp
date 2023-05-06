#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100],n,m,i,s;
int main(){cin>>n>>m;
    for(;i<n;++i)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<m&a[i]<0;++i)
        s-=a[i];cout<<s;}
