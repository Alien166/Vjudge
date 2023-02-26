#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int x=str.size();
    bool flag=false;
    for(int i=0;i<x;i++)
    {
       if(str[i]>=33&&str[i]<=136){
           if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
               flag=true;
           }
       }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
