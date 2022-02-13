#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("cowjog.in", "r", stdin);
    freopen("cowjog.out", "w", stdout);
    int N;
    cin >> N;

    vector<pair<int,int>> cows(N);
    for(int i = 0; i < N; i++){
        cin >> cows[i].f >> cows[i].s;
    }

    int ans = 1;
    for(int i = N-2; i >= 0; i--){
        if(cows[i].s > cows[i+1].s){
            cows[i].s = cows[i+1].s;
        } else {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
