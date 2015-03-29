#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int t, a, b;
    
    while (scanf("%lld", &t) == 1) {
        for (long long int i = 1; i <= t; i++) {
            scanf("%lld %lld", &a, &b);
            
            long long int r = (a / 2) * b;
            
            printf("Case %lld: %lld\n", i, r);
        }
    }
    
    return 0;
}