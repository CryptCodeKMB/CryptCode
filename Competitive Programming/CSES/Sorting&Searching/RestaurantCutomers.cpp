#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
/*
Doesn't pass the #6 case, do request if you have found
a better solution with explanation.
This solution tries to implement sum of prefix.
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> customers;
    int mex = 0;
    for(int i = 0; i<n; i++){
    int a,b;
    cin >> a >> b;
    customers.push_back(make_pair(a,b));
    mex = max(mex,b);
    }

    int pre[mex];
    fill(pre, pre+mex, 0);
    sort(all(customers));
    int maximum = 0;
    for(int i = 0; i < n;i++){
        pre[customers[i].f-1]++;
        pre[customers[i].s]--;
    }
    for(int i = 0; i < mex;i++){
        pre[i+1] += pre[i];
        maximum = max(pre[i], maximum);
    }
    cout << maximum;
    return 0;
}
