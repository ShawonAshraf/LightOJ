#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int t, a, b, c;
    
    while (scanf("%d", &t) == 1) {
        
        for (int i = 1; i <= t; i++) {
        
            scanf("%d %d %d", &a, &b, &c);
            
            if ( a > b && a > c) {
                if ( a*a == (c*c + b*b) ){
                    printf("Case %d: yes\n", i);
                }
                else printf("Case %d: no\n", i);
            }
            else if (b > a && b > c) {
                if ( b*b == (a*a + c*c) ){
                    printf("Case %d: yes\n", i);
                }
                else printf("Case %d: no\n", i);
            }
            else {
                if ( c*c == (a*a + b*b) ){
                    printf("Case %d: yes\n", i);
                }
                else printf("Case %d: no\n", i);
            }
            
        }
        
    }
    
    return 0;
    
}