#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    queue<int>q;
    while (tc){
        int n;
        cin>>n;
        if(n==1){
            cin>>n;
            q.push(n);
        }
        else if(n==2){
            if(!q.empty())
                q.pop();
        }
        else if(n==3)
        {
            if(q.empty()){
                cout<<"Empty!"<<endl;
            }
            else{
                cout<<q.front()<<endl;
            }
        }
    }

    return 0;

}
