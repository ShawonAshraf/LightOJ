#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d;
    double aMinusC, dSq_Minus_bSq, y;
    double area, height;
    int t;
    
    cin >> t;
    for( int i = 1; i <= t; i++ )
    {
        cin >> a >> b >> c >> d;
        
        aMinusC = fabs( a - c );
        dSq_Minus_bSq = ( d * d ) - ( b * b );
        
        y = ( ( aMinusC * aMinusC ) - dSq_Minus_bSq ) / ( 2 * aMinusC );
        height = sqrt( ( b * b ) - (y * y) );
        
        area = 0.5 * ( a + c ) * height;
        
        cout << "Case " << i << ": " << fixed << setprecision(10) << area << endl;
    }
    
    
    return 0;
}