#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, n, i, rem = 0, temp = 0;
	scanf("%d%d", &k, &n);
	if(n > 0 && n < 101 && k > 0 && k < 101)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			if(temp < 0 || temp > 100)
			{
				return EXIT_FAILURE;
			}
			rem += temp - k;
			rem = rem < 0 ? 0 : rem;
		}
		printf("%d\n", rem);
	}
	else
	{
		return EXIT_FAILURE;
	}
	return 0;
}
