#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    double R, r;
    int n;
    
    const double PI = 3.141592654;
    
    while (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            scanf("%lf %d", &R, &n);
            
            r = ( ( sin(PI / n) ) * R ) / ( sin(PI / n) + 1 );
            
            printf("Case %d: %lf\n", i, r);
        }
    }
    
    return 0;
}