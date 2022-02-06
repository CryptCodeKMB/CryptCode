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
For factorization the standard time complexity is O(sqrt(N))
While iterating from i to sqrt(x), we check
whether x is divisble by i, if yes then add 2 to the answer
if x is the square of the divisor we only add one
1x16 -> check for 1 only +2
2x8 -> check for 2 only +2
4x4 -> check for 4 only, since its square +1
Time Complexity O(Nsqrt(x))

Solution with O((x+n)logx) coming soon!
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
	cin >> n;
	for (int q = 0; q < n; q++) {
		int x;
		int div_num = 0;
		cin >> x;
		for (int i = 1; i * i <= x; i++) {
			if (x % i == 0) {
				div_num += i * i == x ? 1 : 2;
			}
		}
		cout << div_num << '\n';
	}
    return 0;
}
