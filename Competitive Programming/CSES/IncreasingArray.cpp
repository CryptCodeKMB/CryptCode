#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;
/*
Further Notice
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int N;
    cin >> N;

    int num[N];

    for(int i = 0; i < N; i++) cin >> num[i];

    ll ans = 0;
    for(int i = 1; i < N; i++){
        if(num[i] < num[i-1]){
            ans += num[i-1]-num[i];
            num[i] = num[i-1];
        }
    }

    cout << ans;
    return 0;
}
