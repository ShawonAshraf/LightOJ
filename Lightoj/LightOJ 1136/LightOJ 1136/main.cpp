#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int t, a, b;
    long long int x = 12, c = 0;
    
    while (scanf("%lld", &t) == 1) {
        for (long long int i = 1; i <= t; i++) {
            scanf("%lld %lld", &a, &b);
            
            c = 0;
            
            for (long long int k = a; k <= b; k++) {
                x = (x * 10) + k;
                
                if (x % 3 == 0) {
                    c++;
                }
            }
            
            printf("Case %lld: %lld\n", i, c);
        }
    }
    
    return 0;
}