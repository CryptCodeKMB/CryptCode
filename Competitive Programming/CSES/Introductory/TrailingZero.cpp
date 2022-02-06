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
/*
This one requires some mathematical reasoning. 
Let n = 10. As you may know, to have zeros at the end
of a number, you will see the divisor of 2 and 5 
2*5 = 10, this is the case that causes the number to
have trailing zeros at the end of the number.
for our case of n, 
1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10
    ^       ^   ^   ^       ^       ^
Let x be the number of divisor of 2 and y be divisor of 10
we can see that x = 5, y = 2. From here we can conclude that
x > y is always true. To find the number of zeros a number have
we just need to count how many times we can divide the number by 5.
*/
int n;

int solve(int n){
  int ans = 0;
  while(n>1){
    n /= 5;
    ans += n;
  }
  return ans;
}
    
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    cout << solve(n);

    return 0;
}
