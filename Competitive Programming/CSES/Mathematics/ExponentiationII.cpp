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
We utilize the technique in Exponentiation I, but a little twist
according to Fermat's Little Theorem, a^(p-1) is congruent to 1 (mod p)
thus we can solve for a^b^c as a^(b^c (mod 1e9+7-1)) (mod 1e9+7)
Time Complexity O(log P)
*/

int fastExpo(int a, int n, int MOD){
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
    const int MOD = 1e9+7;
    for(int i = 0; i<n ;i++){
        int a,b,c;
        cin >> a >> b >> c;
        cout << fastExpo(a,fastExpo(b,c, MOD-1), MOD) << "\n";
    }
    return 0;
}
