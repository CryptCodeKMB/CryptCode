/* This is a simple problem but requires a proper algorithm
Brute force won't work because it will cause TLE while 
pow() function will cause an overflood while referencing, thus
our modulo of 10^9 + 7 inable to divide it.

I'm gonna show 3 methods on how to approach this problem.

1) Iterative approach
2) Recursive approach
3) Bitwise approach
*/
--- TEMPLATE ---
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
 
 
const int MOD = 1e9+7;
int n;
 
int solve(){
  // CODE
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    cout << solve();
 
    return 0;
}

/* 1) Iterative approach

Imagine we have a number of 2^11, we represent a = 2, n = 11
We can track the answer by initializing it with 1.
So when n is odd, we remove n by 1, then update the answer by multiplying
by a. so it'd look like this. 
2^11, a = 2, n = 11, ans = 1
2^10, a = 2, n = 10, ans = 1*2 = 2
If n is even we divide the power by 2 and squaring the a
2^10, a = 2, n = 10, ans = 2
4^5, a = 4, n = 5, ans = 2
Repeat these step until we get n < 1
4^4, a = 4, n = 4, ans = 2*4 = 8
16^2, a = 16, n = 2, ans = 8
256^1, a = 256, n = 1, ans = 8
256^0, a = 256, n = 0, ans = 8*256 = 2048
Then it returns the answer.

int solve(){
 int ans = 1, a = 2;
 
    while(n>=1){
        if(n%2 == 0){
            a = (1LL*a*a) % MOD;
            n /= 2;
        } else {
      ans = (1LL * ans * a) % MOD;
      n--;
        }
    }
    return ans;
}

2) Recursive approach

This approach follows the same principle as in iterative approach
but you need initialize when n == 0 to return 1, since
the function will be called recursively, and we want to avoid
n = 0, to interupt the flow.

int solve(int a, int n){

    if(n==0) return 1;
    
    if(n%2 == 0) return solve((1LL*a*a) % MOD, n/2);
    return (1LL*a* solve(a,n-1)) % MOD;
}

3) Bitwise approach
I don't recommended for beginners to use this approach
Will be explained soon
int solve(){
    ll ans = 1;
    ll a = 2;
    while(n > 0){
        if(n&1)
            ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        n >>= 1;
    }
    return ans;
}
*/
