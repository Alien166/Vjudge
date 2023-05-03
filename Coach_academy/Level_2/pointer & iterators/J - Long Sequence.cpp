#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n , m ,x, sum = 0 ,sumA, ans; cin >> n;
    ll arr[n] {0};
    for (int i = 0 ; i < n ; ++i) cin >> arr[i] , sum += arr[i];
    cin >> x;
    m = x / sum;
    sumA = m * sum;
    ans = m * n;
    for (int i = 0 ; i < n ; ++i){
        sumA += arr[i];
        ans++;
        if (sumA > x){
            cout << ans << "\n";
            return 0;
        }
    }
    return 0;
}
