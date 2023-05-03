#include<bits/stdc++.h>
using namespace std;
int f[200010],n,k,q,x;
int main() {
	cin>>q;
	while(q--){
		cin>>n>>k;
		int cnt=0;
		for(int i=1;i<=n;i++) {
			cin>>x;
			if(x&1)
				f[++cnt]=i;
		}
		if(cnt>=k&&(cnt-k+1)&1) {
			cout<<"YES\n";
			for(int i=1; i<k; i++)cout<<f[i]<<' ';
			cout<<n<<endl;
		} else cout<<"NO\n";
	}
	return 0;
}
