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
As you cans see the pattern of the solution, it started from the even number with interval of 2
followed by odd number interval of 2. Time complexity of O(n)
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >> n;

    if (n==1) cout << 1;
    else if (n==2 || n == 3) cout << "NO SOLUTION";
    else {
        for(int i = 2; i <= n; i+=2) cout << i << " ";
        for(int i = 1; i <= n; i+=2) cout << i << " ";
    }
    return 0;
}
