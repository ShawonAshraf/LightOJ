#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int t, r, n, n_students;
    
    while(scanf("%d", &t) == 1){
        
        for(int i = 0; i < t; i++){
            r = 0;
            
            scanf("%d", &n_students);
            for(int j = 0; j < n_students; j++){
                scanf("%d", &n);
                
                if(n > 0) r += n;
            }
            
            printf("Case %d: %d\n", i+1, r);
        }
    }
    
    return 0;
}