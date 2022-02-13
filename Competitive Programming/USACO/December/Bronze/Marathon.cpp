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
    freopen("marathon.in", "r", stdin);
    freopen("marathon.out", "w", stdout);
    int N;
    cin >> N;
    vector<pair<int,int>> coords(N);
    int tdis = 0;
    for(int i = 0; i < N; i++){
            cin >> coords[i].f >> coords[i].s;
            if(i != 0){
                tdis += abs(coords[i].f - coords[i-1].f) + abs(coords[i].s - coords[i-1].s);
            }
    }

    int smallest = INT_MAX;
    for(int i = 1; i < N-1; i++){
        int dist = tdis - (abs(coords[i].f - coords[i-1].f) + abs(coords[i].s - coords[i-1].s))
        - (abs(coords[i+1].f - coords[i].f) + abs(coords[i+1].s - coords[i].s)) +
        (abs(coords[i+1].f - coords[i-1].f) + abs(coords[i+1].s - coords[i-1].s));
        smallest = min(smallest, dist);
    }
    cout << smallest;
    return 0;
}
