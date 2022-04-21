#include <bits/stdc++.h>
 
typedef int64_t tt;
typedef long long ll;
using namespace std;
 
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
const int N = 8;
bool b[N][N], cur[N][N];
ll ans;
 
bool place(int x, int y){
    bool yes = true;
    for(int i = 0; i < N; i++)
        if(cur[x][i] || cur[i][y])
        yes = false;
    for(int i = 0; x-i >= 0 && y-i >= 0; i++)
        if(cur[x-i][y-i])
            yes = false;
    for(int i = 0; x-i >= 0 && y+i < N; i++)
        if(cur[x-i][y+i])
            yes = false;
    return yes;
}
 
// This Method checks whether the board placement is reserved
bool check(){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(b[i][j] && cur[i][j])
                return false;
    return true;
}
 
void dfs(int x){
 
    // Check whether the complete 1 set of 8 queens
    if(x == N){
            if(check())
            ans++;
    return;
    }
 
    for(int y = 0; y < N; y++){
        if(place(x,y)){
            cur[x][y] = true;
            dfs(x+1);
            cur[x][y] = false;
        }
    }
}
 
int main(){
    //freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios_base::sync_with_stdio(0); cin.tie(0);
 
 
	for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            char c;
            cin >> c;
          b[i][j] = c == '*';
        }
	}
 
	dfs(0);
 
	cout << ans;
 
    return 0;
}
