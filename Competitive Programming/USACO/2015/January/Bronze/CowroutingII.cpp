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

    int A,B,N;
    
    cin >> A >> B >> N;
    vector <vector<int>> routes(N);
    vector <int> cost(N);
    int ans = 1e5;
    for(int i = 0; i < N; i++){
        int len;
        cin >> cost[i] >> len;
        routes[i].resize(len);
        for(int j = 0; j < len; j++){
            cin >> routes[i][j];
        }
    }

    vector<int> fr(1e4+1, 1e5), sr(1e4+1, 1e5);
    fr[A] = 0; sr[B] = 0;
    for(int i = 0; i < N; i++){

            int pos_a = routes[i].size();
            int pos_b = -1;
        for(int j = 0; j < routes[i].size(); j++){
            if(routes[i][j] == A){
                pos_a = j;
            } else if (routes[i][j] == B){
            pos_b = j;
            }
        }

        for(int j = 0; j < routes[i].size(); j++){
            if (pos_a <= j){
                fr[routes[i][j]] = min(fr[routes[i][j]], cost[i]);
            }
            if (pos_b >= j){
                sr[routes[i][j]] = min(sr[routes[i][j]], cost[i]);
            }
        }
    }
    for(int i = 1; i < 1e4; i++){
        ans = min(ans, fr[i] + sr[i]);
    }

    if(ans == 1e5)cout << -1;
    else cout << ans;

    return 0;
}
