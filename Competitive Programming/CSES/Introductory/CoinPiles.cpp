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
The only possible way for the coin piles to be empty is if they sum is divisible by 3
and the difference between the two piles doesn't exceed the minimum number of coins in a pile
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;

        if((a+b) % 3 == 0 && abs(a-b) <= min(a,b)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
