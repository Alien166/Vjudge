#include <bits/stdc++.h>
using namespace std;
int main() {

   string str;
   int ans;
   cin>>str;
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();++i){
        if(str[i]!=str[i+1]){
            ans++;
        }
    }
    if(ans&1){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
