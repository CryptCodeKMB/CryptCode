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
Let n = 37. 

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
