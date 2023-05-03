#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    string s;
    cin >> s;
    while (s.back() == '0')
        s.pop_back();
    for (i = 0; i < s.size() / 2; ++i)
        if (s[i] != s[s.size() - i - 1])
            break;
    if(i < s.size() / 2)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
}
