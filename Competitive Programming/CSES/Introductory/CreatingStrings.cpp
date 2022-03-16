#include <bits/stdc++.h>

typedef int64_t tt;
typedef long long ll;
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

set<string> nonrepeat;

int findFactorial(int x, int y){

    if(x == 1) return y;
    findFactorial(--x, y*x);

}

void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        nonrepeat.insert(str);
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]);
        permutations(str, i + 1, n);
        swap(str[i], str[j]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    string in;

    cin >> in;

    map<char, int> lists;


    for(int i = 0; i< (int)in.size(); i++){
        lists[in[i]]++;
    }

    int total = findFactorial(in.size(), 1);
    for(auto x: lists){
          total /= findFactorial(x.second, 1);
    }
    cout << total << "\n";

    permutations(in, 0, in.size());

    for(auto x: nonrepeat)
        cout << x << "\n";
    return 0;
}
