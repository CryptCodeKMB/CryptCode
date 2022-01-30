#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;

/*
This is a simple problem, check for when the value N is divisble by 2
If it is divisble, then divide N by 2
If it is not divisible, then multiply by 3 and add 1
long long or larger data type is required since N can exceed +-2147483647 (int)
*/

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll N;
    cin >> N;

    while(N!=1){
            cout << N << " ";
        if(N%2 == 0) N /= 2;
        else N =(N*3)+1;
    }
    cout << 1;


    return 0;
}
