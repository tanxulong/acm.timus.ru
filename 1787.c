#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, n, i;
	int *a;

	scanf("%d%d", &k, &n);
	if(n > 0 && n < 101 && k > 0 && k < 101)
	{
		a = (int*)malloc(sizeof(int)*(n+1));
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if(a[i] < 0 || a[i] > 100)
			{
				return EXIT_FAILURE;
			}
		}
		a[n] = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i] > k)
			{
				a[i+1] += a[i] - k;
			}
		}
		if(a[n] > 0)
		{
			printf("%d", a[n]);
		}
		else
		{
			printf("%d", 0);
		}
	}
	else
	{
		return EXIT_FAILURE;
	}
	return 0;
}
