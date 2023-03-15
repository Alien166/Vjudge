#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n, ans=0;
   cin>>n;
    while (n>0){
        if(n%2==1)
            ans +=1;
        n /=2;
    }
    cout<<ans;
    return 0;
}
