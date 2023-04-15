#include <iostream>
using namespace std;
int n,a[1010],b[1010],used[1010],i=1,x,y;main(){for(cin>>n;i<=n;++i)cin>>a[i],++used[a[i]];for(i=1;i<=n;++i)cin>>b[i],a[i]!=b[i]?!x?x=i:y=i:0;if(y)used[a[x]]==2&&!used[b[x]]?a[x]=b[x]:a[y]=b[y];else{for(i=1;used[i];++i);a[x]=i;}for(i=1;i<=n;++i)cout<<a[i]<<' ';}
