#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;

/*
We can approach this problem naively since the N < 2*10^5, thus O(n) is possible
We create an array of N-1, then sort it in non-decreasing order
While iterating through the array check whether the i'th number is equal to i+1
If not, then we break from the loop. Also, check for i+2 is equals to N because
we've reach the end of the array and our first check would not detect if the i'th
number missing if it equals to N
*/

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    int num[N-1];
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
