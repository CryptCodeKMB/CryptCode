#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;

/*
If we try to approach this problem using 2 pointers, it would not pass the time
since N < 10^6, O(n^2) thus at worse require at most 10^12 operations.
With a single pointer we can get O(n), where we track the i-1'th character
and the maximum length of the continuous characters
*/

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    string streng;
    cin >> streng;

    int length = 1, maximum = 0;
    char prev;
    for(int i = 0; i < (int)streng.size() ; i++){

        if(streng[i] == prev) length++;
            else length = 1;

        maximum = max(maximum, length);
        prev = streng[i];
    }

    cout << maximum;

    return 0;
}
