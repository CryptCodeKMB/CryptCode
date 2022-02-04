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
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    set<int>numbers;
 
    for(int i = 0; i<n ;i++){
        int x;
        cin >> x;
        numbers.insert(x);
    }
 
    cout << numbers.size();
 
    return 0;
}
