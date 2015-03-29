#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long t, case_no = 1, n, tmpEven;
    
    scanf("%lld",&t);
    
    while( t-- ){
        
        scanf("%lld",&n);
        printf("Case %lld: ",case_no++);
        tmpEven = 1;
        
        while(n){
            
            if( !(n & 1) ){
                
                tmpEven <<= 1;
                n >>= 1;
                if( n & 1){
                    printf("%lld %lld\n",n,tmpEven);
                    break;
                }
            }
            else{
                printf("Impossible\n");
                break;
            }
            
        }
    }
    return 0;
}