#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> left_rotation(vector<int> a, int n, int k) {
    k %= n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        vec[(n+i-k)%n] = a[i];
    }
    return vec;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    vector<int> output = left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
