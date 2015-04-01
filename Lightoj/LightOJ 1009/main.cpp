#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <map>

using namespace std;


int most_frequent(vector<int> const& v)
{
    map<int, int> frequencyMap;
    int maxFrequency = 0;
    int mostFrequentElement = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int x = v.at(i);

        int f = ++frequencyMap[x];

        if (f > maxFrequency)
        {
            maxFrequency = f;
            mostFrequentElement = x;
        }
    }

    int r = count(v.begin(), v.end(), mostFrequentElement);

    return r;
}


int main()
{
    int t, u, v;
    vector<int> data;

    while(scanf("%d", &t) == 1)
    {
       for(int i = 1; i <= t; i++)
       {
           int x;
           scanf("%d", &x);

           for(int j = 1; j <= x; j++)
           {
               scanf("%d %d", &u, &v);

               data.push_back(u);
               data.push_back(v);
           }

           int r = most_frequent(data);
           printf("Case %d: %d\n", i, r);

           data.clear();
       }
    }

    return 0;
}
