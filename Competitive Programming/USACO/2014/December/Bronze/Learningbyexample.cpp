#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("learning.in", "r", stdin);
    freopen("learning.out", "w", stdout);

    ll N, A, B;
    cin >> N >> A >> B;
    vector<pair<ll,int>> lits(N);
    for(int i = 0; i < N; i++){
        string in; int en;
        cin >> in >> en;
        lits.push_back(mp(en, in == "S" ? 1 : 0));
    }
    ll INF = INT_MAX;
    lits.push_back(mp(-INF, 0));
    lits.push_back(mp(INF, 0));
    sort(all(lits));

    int ans = 0;

    for(int i = 0; i+1 < lits.size(); i++){
        ll S = lits[i].f;
        ll E = lits[i+1].f;
        ll M = (S+E)/2;

        if(lits[i].s == 1){
            ll start = max(A, S+1);
            ll ends = min(B,M);
            if(ends >= start){
                ans += ends-start+1;
            }
        }
        if(lits[i+1].s == 1){
            ll start = max(A, M+1);
            ll ends = min(B,E);
            if(ends >= start){
                ans += ends-start+1;
            }
        }
        if(lits[i+1].s == 1 && lits[i].s == 0 && S%2 == E%2 && A<=M && M<=B){
            ans++;
        }
    }
    cout << ans;

    return 0;
}
