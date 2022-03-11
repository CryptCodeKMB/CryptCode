#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int N;

    cin >> N;

    if(N % 4 == 3){
        cout << "YES\n";
        cout << (N/2) + 1 << "\n";
        for(int i = 1; i <= N/2; i+=2) cout << i << " ";
        for(int i = (N/2)+1 ; i < N; i+=2) cout << i << " ";
        cout <<"\n";

        cout << N/2 << "\n";
        for(int i = 2; i < N/2; i+=2) cout << i << " ";
        for(int i = (N/2)+2; i < N; i+=2) cout << i << " ";
        cout << N;

    } else if ( N % 4 == 0){
        cout << "YES\n";
        cout << N/2 << "\n";
        for(int i = 1; i <= N/2; i+=2) cout << i << " ";
        for(int i = (N/2)+2; i <= N; i+=2) cout << i << " ";
        cout << "\n";
        cout << N/2 << "\n";
        for(int i = 2; i <= N/2; i+=2) cout << i << " ";
        for(int i = (N/2)+1; i <= N; i+=2) cout << i << " ";

    } else {
    cout << "NO";
    }
    return 0;
}
