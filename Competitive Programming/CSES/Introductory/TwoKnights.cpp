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
 
    int N;
 
    cin >> N;
 
    for(ll i = 1; i <= N; i++){
        ll total = (i*i-1)*i*i/2;
        ll notable = 4*(i-1)*(i-2);
        cout << total - notable << "\n";
    }
 
    return 0;
}
