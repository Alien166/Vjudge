#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+9;
int a[maxn],p[maxn],n,k;
int main()
{
	int i,l=1,r=1,sum;
	cin >> n >>k;
    for (i=1;i<=n;i++) cin>>a[i];
    for (;r<=n && sum<k;r++)  sum+=(!p[a[r]]),p[a[r]]++;
    if (sum<k) return cout<<"-1 -1\n",0;
    for (;p[a[l]]>1;l++) p[a[l]]--;
	cout<<l<<" "<<r-1<<'\n';
}
