#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int T;
    cin >> T;

    stack<int> st;

    while (T--) {
        int query;
        cin >> query;

        if (query == 1) {
            int n;
            cin >> n;
            st.push(n);
        } else if (query == 2) {
            if (!st.empty())
                st.pop();
        } else if (query == 3) {
            if (st.empty())
                cout << "Empty!\n";
            else
                cout << st.top() << "\n";
        }
    }

    return 0;
}
