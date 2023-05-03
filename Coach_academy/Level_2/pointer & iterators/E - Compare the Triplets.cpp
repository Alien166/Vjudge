#include <bits/stdc++.h>
    using namespace std;
    int main() {
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int a=0,b=0;
        if(a1>b1){
            a++;
        }
        else if(b1>a1){
            b++;
        }
        if(a2>b2){
            a++;
        }
        else if(b2>a2){
            b++;
        }
        if(a3>b3){
            a++;
        }
        else if(b3>a3){
            b++;
        }
        cout<<a<<" "<<b;
}
