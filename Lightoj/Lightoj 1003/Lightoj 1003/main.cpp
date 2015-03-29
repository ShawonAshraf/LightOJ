#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int t;
    
    
    while(scanf("%d", &t) == 1)
    {
        for(int k = 1; k <= t; k++)
        {
            int m;
            bool f = false;
            
            scanf("%d", &m);
            for(int i = 0; i < m; i++)
            {
                cin >> a;
                cin >> b;
                
                if(a == "soda" || a == "water")
                {
                    f = true;
                }
                else f = false;
            }
            
            if(f == true) cout << "Case " << k << ": " << "Yes" << endl;
            else cout << "Case " << k << ": " << "No" << endl;

        }
    }
    
    return 0;
}