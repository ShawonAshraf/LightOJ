#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t, x1, y1, x2, y2;
    int cows, x, y;
    
    
    while (scanf("%d", &t) == 1) {
        for (int k = 1; k <= t; k++) {
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            
            //getc(stdin);
            
            scanf("%d", &cows);
            printf("Case %d:\n", k);
            
            for (int i = 1; i <= cows; i++) {
                scanf("%d %d", &x, &y);
                
                if ( x >= x1 && x <= x2 && y >= y1 && y <= y2 ) {
                    printf("Yes\n");
                }
                else printf("No\n");
            }

        }
    }
    
    return 0;
}