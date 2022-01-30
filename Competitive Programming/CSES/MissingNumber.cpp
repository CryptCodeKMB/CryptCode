#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    int num[N];
    for(int i = 0; i < N-1; i++){
        cin >> num[i];
    }
    sort(num, num + N-1);
    for(int i = 0; i < N-1; i++){
        if(num[i] != i+1){
            cout << i+1;
            break;
         }
         else if (i+2 == N){
            cout << N;
         }
    }
    return 0;
}
