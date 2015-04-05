#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int t, n, i, j, m, result = 0;
    vector<int> v(0, 0);
    
    while(cin >> t)
    {
        for(int x = 1; x <= t; x++)
        {
            cin >> n;
            
            for(i = 0; i < n; i++)
            {
                int y;
                cin >> y;
                v.push_back(y);
            }
            
            sort(v.begin(), v.end());
            
            result = 0;
            for(i = 0; i < n; i++)
            {
                for(j = i; j < n && v[i] == v[j]; j++);
                
                m = j - i;
                
                result += ( (m + v[i]) / (v[i] + 1) ) * (v[i] + 1);
                
                i = j - 1;
            }
            
            cout << "Case " << x << ": " << result << endl;
            v.clear();
        }
    }
    
    return 0;
}