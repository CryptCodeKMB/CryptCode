#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define push_back pb
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,x;
    cin >> n >> x;
    int kids[n];
    for(int i = 0; i < n; i++) cin >> kids[i];
    sort(kids, kids+n);

    int p1 = 0, p2 = n-1, ans = 0;

    while(p1 <= p2){
        if(p1 == p2) {
            ans++; break;
        }
        if(kids[p2]+kids[p1] <= x){
            ans++,p2--,p1++;
        } else if (kids[p2]+kids[p1] > x && kids[p2]>kids[p1]){
            p2--;ans++;
        } else {
            p1++;ans++;
        }
    }
    cout << ans;
    return 0;
}
