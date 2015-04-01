#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

#define check(n, pos) (n & (1<<pos))
#define set(n, pos) (n | (1<<pos))
#define getint(n) scanf("%d", &n)
#define loop(i, n) for(int i=0; i<n; i++)


int dp[17][1<<17];
int profile[17][17];
int N;



int rec(int level, int mask)
{
    if(level >= N)
    {
        return 0;
    }
    int &ret = dp[level][mask];
    if(ret != -1) return ret;


    ret = -1;

    loop(i, N)
    {
        if(check(mask, i) == 0)
        {
            ret = max(ret, rec(level + 1, set(mask, i)) + profile[level][i]);
        }
    }
    return ret;
}


int main()
{
    int kases, kaseno = 0;
    getint(kases);
    while(kases--)
    {
        memset(dp, -1, sizeof(dp));
        getint(N);
        loop(i, N)
        {
            loop(j, N)
            {
                getint(profile[i][j]);
            }
        }


        printf("Case %d: %d\n", ++kaseno, rec(0, 0));

    }
    return 0;

}
