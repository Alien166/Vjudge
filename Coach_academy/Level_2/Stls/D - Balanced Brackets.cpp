#include <bits/stdc++.h>
using namespace std;
bool Arepair(char open,char close)
{
  if(open=='(' && close==')') return true;
  else if(open=='{' && close=='}') return true;
  else if(open=='[' && close==']') return true;
    return false;
}
bool AreParanthesesBalanced(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();++i){
        if(str[i]=='('|| str[i]=='{' || str[i]=='[')
            str.push_back(str[i]);
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(st.empty()||!Arepair(st.top(),str[i]))
                return false;
            else
                 st.pop();
        }
    }
    return st.empty()? true: false;
}
int main()
{
    int tc;
    string str;
    cin>>str;
    while (tc--) {
        if (AreParanthesesBalanced(str))
            cout << "yes\n";
        else
            cout << "No\n";
    }
    return 0;

}
