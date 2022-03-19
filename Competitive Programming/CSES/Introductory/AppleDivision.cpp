#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N, apple[20];

	cin >> N;

	for(int i = 0; i < N; i++) cin >> apple[i];
	ll sol = LONG_MAX;
	for(int i = 0; i < (1<<N); i++){
            ll w1 = 0, w2 = 0;
            for(int j = 0; j < N; j++){
                if(i&(1<<j)) w1 += apple[j];
                else w2 += apple[j];
            }
            sol = min(sol, abs(w2-w1));
	}
	cout << sol;


    return 0;
}
