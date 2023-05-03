#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,sum;
    cin>>str;
    for(int i=0;i<str.size();++i){
        if(str[i] !='+')
            sum.push_back(str[i]);
    }
    sort(sum.begin(),sum.end());
    cout<<sum[0];
    for(int i=1;i<sum.size();++i){
        cout<<'+'<<sum[i];
    }
    return 0;

}
