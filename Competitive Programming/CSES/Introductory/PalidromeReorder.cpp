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

    string in;
    cin >> in;
    map <int,int> letters;

    for(int i = 0; i < in.size(); i++){
        letters[in[i] - 'A']++;
    }
    int keep;
    int odd = 0;
    for(int i = 0; i < 26; i++){
        if(letters[i] % 2 != 0){
            odd++;
            keep = i;
        }
    }

    if(in.size() % 2 == 0){
        if(odd > 0) cout << "NO SOLUTION";
        else {
            for(int i = 0; i < 26; i++){
                int len = letters[i]/2;
                while(len){
                    cout << (char) (i + 'A');
                    letters[i]--;
                    len--;
                }
            }
            for(int i = 25; i > -1; i--){
                while(letters[i]){
                    cout << (char) (i + 'A');
                    letters[i]--;
                }
            }
        }

    } else if (in.size() % 2 != 0){
        if(odd > 1) cout << "NO SOLUTION";
        else {
                for(int i = 0; i < 26; i++){
                        int len = floor(letters[i]/2);
                while(len){
                    cout << (char) (i + 'A');
                    letters[i]--;
                    len--;
                }
            }
                cout << (char) (keep + 'A');
                letters[keep]--;

            for(int i = 25; i > -1; i--){
                while(letters[i]){
                    cout << (char) (i + 'A');
                    letters[i]--;
                }
            }
        }
    }
    return 0;
}
