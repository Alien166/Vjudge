#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());
    
    int t = 0;
    for(vector<int>::iterator it = prices.begin(); it != prices.end(); it++)
    {
        if(*it <= k)
        {
            t++;
            k -= *it;
        }
        else break;
    }
    cout << t << endl;
    
    return 0;
}
