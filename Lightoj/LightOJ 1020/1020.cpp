#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int t, n;
    char name[5];

    while(scanf("%d", &t) == 1)
    {
        for(int i = 1; i <= t; i++)
        {
            scanf("%d%s", &n, name);

            if(strcmp(name, "Alice") == 0)
            {
                if( (n % 3) == 1 ) printf("Case %d: Bob\n", i);
                else printf("Case %d: Alice\n", i);
            }

            else
            {
                if( (n % 3) == 0 ) printf("Case %d: Alice\n", i);
                else printf("Case %d: Bob\n", i);
            }
        }
    }


    return 0;

}
