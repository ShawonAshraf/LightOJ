#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    double sq_a, c_a, shade_a, r;
    double pi = 2 * acos(0.0);
    
    while (scanf("%d", &t) == 1) {
        
        for(int i = 0; i < t; i++){
            scanf("%lf", &r);
            
            sq_a = (2 *r) * (2 * r);
            c_a = (r*r) * pi;
            
            shade_a = (sq_a - c_a) + pow(10, -9);
            
            printf("Case %d: %.2lf\n", i+1, shade_a);
        }
        
    }
    
    return 0;
}