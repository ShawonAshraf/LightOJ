#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>


using namespace std;


int main(void)
{
    int t;
    int balance, inst_n, amount;
    char inst[1000] = {};
    int ans[1000] = {};
    int k, i;
    
    
    while(scanf("%d", &t) == 1){
        for(int j = 1; j <= t; j++){
            gets(inst);
            
            balance = 0;
            
            for(i = 1, k = 0; i <= inst_n; i++){
                scanf("%s", inst);
                
                if(strcmp(inst, "donate")){
                    scanf("%d", &amount);
                    balance += amount;
                    ans[k] = balance;
                    k++;
                   
                }
            }
            printf("Case %d:\n", j);
            for(int x = 0; x < k; x++){
                printf("%d\n", ans[x]);
            }
        }
    }
    
    return 0;
}