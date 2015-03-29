#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>


using namespace std;

#define LL long long

LL l, r;
int a[66];
LL dp[66][66];

LL dfs(int len, int l, int r, bool lim, bool ok)
{
	
    if(l < r) return !lim || (lim && ok);
    if(!lim && ~dp[len][l]) return dp[len][l];
    LL ret = 0;
    int m = lim ? a[l] : 9;
    int i;
    for(i = 0; i <= m; i++) {
        if(l == len-1 && !i) continue;
        int g = ok;
        if(g) g = a[r] >= i;
        else g = a[r] > i;
        ret += dfs(len, l-1, r+1, lim&&i==m, g);
    }
    if(!lim) dp[len][l] = ret;
    return ret;
}

LL gao(LL n)
{
    if(n < 0) return 0;
    if(n == 0) return 1;
    int len = 0;
    while(n) { a[len++] = n%10; n /= 10; }
    LL ret = 1;
    int i;
    for(i = len; i >= 1; i--)
        ret += dfs(i, i-1, 0, i==len, 1);
    return ret;
}


int main()
{
    int cas;
    
    cin >> cas;
    memset(dp, -1, sizeof(dp));
    
    for(int ca = 1; ca <= cas; ca++) {
        cin >> l >> r;
        if(l > r) swap(l, r);
        printf("Case %d: %lld\n", ca, gao(r) - gao(l-1));
    }
    
    return 0;
}
