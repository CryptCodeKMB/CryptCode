#include <bits/stdc++.h>
#define f first
#define s second
typedef int64_t tt;
typedef unsigned long long ll;
using namespace std;
/*
Let X = maximum value of x and y
As brute force that is iterating through the entire 2D array, at worse, it will take O(t*X^2) equivalent to 10^9 * 10^9 * 10^5 = 10^23
which is beyond the time we can afford. If we look carefully, every odd number of column and even number of row lies the square of 
the array size at the end top or left of the array. Using that information, we can find X of a coordinate, we now know the coordinate lies in the range of (X-1)^2 + 1 and X^2.
We can check for the value of x or y that is equals to X ( y>x works too) then decided our operation to either add to (X-1)^2 or subtract from X^2
Using this method, for every case we get O(1) which result in O(t) for the entire test cases.
*/
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int y,x;
        cin >> y >> x;
    if(max(x,y)%2==0){
        if(y == max(y,x)) cout << (ll)y*y - (ll)(x-1);
         else cout << (ll)(x-1)*(x-1) + (ll)y;
    } else {
        if(y == max(y,x)) cout << (ll)(y-1)*(y-1) + (ll)x;
         else cout << (ll)x*x - (ll)(y-1);
           }
            cout << "\n";
    }
    return 0;
}
