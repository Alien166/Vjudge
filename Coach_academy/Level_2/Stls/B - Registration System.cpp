#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    map<string,int>a;
    cin>>s;
    while(cin>>s)
    {
        if(a[s])cout<<s<<a[s]<<endl;
        else  cout<<"OK"<<endl;
        a[s]++;
    }
}
