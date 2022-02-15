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
    freopen("cowroute.in", "r", stdin);
    freopen("cowroute.out", "w", stdout);

    int N, A, B;
    cin >> A >> B >> N;
    int ans = INT_MAX;
    for(int i = 0; i < N; i++){
        int cost, route;
        cin >> cost >> route;
        int track[route];
        bool found = 0;
        for(int j = 0; j < route; j++){
            cin >> track[j];
                if(track[j] == A) found = 1;
                if(track[j] == B && found){
                    ans = min(ans, cost);
                }
        }
    }
    if(ans != INT_MAX) cout << ans;
    else cout << -1;

    return 0;
}
