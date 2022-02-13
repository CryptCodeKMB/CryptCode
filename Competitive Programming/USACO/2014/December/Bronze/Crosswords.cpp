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
    freopen("crosswords.in", "r", stdin);
    freopen("crosswords.out", "w", stdout);
    int N, M;
    cin >> N >> M;
    bool grid[N][M];
    vector <pair<int,int>> lists;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
                char in;
                cin >> in;
            if(in == '.') grid[i][j] = 1;
            else grid[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
                if(grid[i][j] == 0) continue;
                //Horizontal Clue
                else if((i == 0 || grid[i-1][j] == 0) && grid[i][j] == 1 && grid[i+1][j] == 1 && grid[i+2][j] == 1 && i+2 < N)
                    lists.push_back(make_pair(i+1,j+1));
                //Vertical Clue
                else if((j == 0 || grid[i][j-1] == 0) && grid[i][j] == 1 && grid[i][j+1] == 1 && grid[i][j+2] == 1 && j+2 < M)
                    lists.push_back(make_pair(i+1,j+1));
        }
    }
    cout << lists.size();
    for(auto x : lists){
        cout << "\n" << x.f << " " << x.s;
    }
    return 0;
}
