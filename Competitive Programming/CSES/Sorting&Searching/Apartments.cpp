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
    int n,m,k;
    cin >> n >> m >> k;
    int apply[n], apartment[m];

    for(int i = 0; i < n; i++) cin >> apply[i];
    for(int i = 0; i < m; i++) cin >> apartment[i];

    sort(apply, apply+n); sort(apartment, apartment + m);

    int p1 = 0, p2 = 0, ans = 0;

    while(p1<n && p2<m){
        if(abs(apply[p1]-apartment[p2]) <= k){
            p1++,p2++,ans++;
        } else if(abs(apply[p1]-apartment[p2]) >= k && apartment[p2] > apply[p1]){
        p1++;
        } else {
        p2++;
        }
    }
    cout << ans;
    return 0;
}
