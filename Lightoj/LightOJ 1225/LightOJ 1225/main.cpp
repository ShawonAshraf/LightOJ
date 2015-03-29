#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int t, a, b;
    
    while(scanf("%d", &t) == 1){
        
        for(int i = 0; i < t; i++){
            
            scanf("%d", &a);
            if(a < 10) {
                printf("Case %d: Yes\n", i+1);
            }
            else{
                int c = 0;
                b = a;
                
                
                while(a > 0){
                    c = (c * 10) + (a % 10);
                    a /= 10;
                }
                
                if(b == c){
                    printf("Case %d: Yes\n", i+1);
                }
                else {
                    printf("Case %d: No\n", i+1);
                }
            }
        }
    }
    
    return 0;
}