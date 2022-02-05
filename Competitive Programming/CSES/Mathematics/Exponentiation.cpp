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
Refer to BitString in Introductory
*/
const int MOD = 1e9+7;
int fastExpo(int a, int n){
    int ans = 1;

    while(n>=1){
        if(n%2 == 0){
            a = (1LL*a*a) % MOD;
            n/=2;
        } else {
        ans = (1LL*ans*a) % MOD;
        n--;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i<n ;i++){
        int a,b;
        cin >> a >> b;
        cout << fastExpo(a,b) << "\n";
    }
    return 0;
}
