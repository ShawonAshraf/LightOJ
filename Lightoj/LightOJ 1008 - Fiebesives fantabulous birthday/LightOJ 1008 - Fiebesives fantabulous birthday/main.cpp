#include <iostream>
#include <cmath>
#include <cstdio>
#include <utility>

using namespace std;

int main()
{
    long long int t, x, y, n;
    
    while( scanf("%lld", &t) == 1 ){
        
        for( long long int i = 0; i < t; i++ ){
            
            scanf("%lld", &n);
            long long int c = ceil( sqrt(n) );
            long long int r = ( c * c ) - n;
            
            
            if( r < c){

                y = r + 1;
                x = c;
            }
            else{
                x = ( 2 * c ) - r - 1;
                y = c;
            }
            
            if ( c & 1 ) swap( x, y );
            
            printf( "Case %lld: %lld %lld\n", i+1, x, y );
            
        }
        
    }
    
    return 0;
}