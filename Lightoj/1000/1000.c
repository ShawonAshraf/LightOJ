#include <stdio.h>
int main()
{
	int x,a,b,c,i;
	
	while(scanf("%d", &x)==1)
	{
		for(i=0; i<x; i++)
		{
			scanf("%d %d", &a, &b);
			printf("Case %d: %d\n", i+1, a+b);
		}
	}
	
	return 0;
}