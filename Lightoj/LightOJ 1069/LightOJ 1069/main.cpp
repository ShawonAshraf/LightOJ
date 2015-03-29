#include <iostream>
#include <cstdio>

#define UD 4

using namespace std;

int main()
{
    int t, pos, floor, ans;
    
    while (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            scanf("%d %d", &pos, &floor);
            
            if (pos > floor) {
                int flTemp = pos - floor + pos;
                ans = (UD * flTemp) + 19;
            }
            else {
                ans = (UD * floor) + 19;
            }
            
            printf("Case %d: %d\n", i, ans);
        }
    }
    
    return 0;
}