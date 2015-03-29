#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    double AB, BC, CA, r;
    
    
    while(scanf("%d", &t) == 1)
    {
        for(int i = 1; i <= t; i++)
        {
            scanf("%lf %lf %lf %lf", &AB, &CA, &BC, &r);
            
            double x = r / (r + 1);
            double AD = sqrt(x) * AB;
            
            printf("Case %d: %lf\n", i, AD);
        }
    }
    
    return 0;
}