/*
 *
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int main()
{
	int n, i, j, temp;		// totally n stones
	int s1 = 0,
		s2 = 0;
	int *arr;
	scanf("%d", &n);
	if(n < 1 || n > 20)
		return EXIT_FAILURE;
	arr = (int*) malloc(sizeof(int)*n);
	if(arr == NULL)
		exit(1);
	i = 0;
	while((scanf("%d", &arr[i]) != EOF) && i < n)
	{
		if(arr[i] > 100000 || arr[i] < 1)
		{
			return EXIT_FAILURE;
		}
		else
		{
			i++;
		}
	}
	for(i = n - 1; i > 0; i--)                // sort
	{
		for( j = 0; j < i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i = n-1; i >= 0; i--)
	{
		if(s1 <= s2)            // keep balance
		{
			s1 += arr[i];
		}
		else
		{
			s2 += arr[i];
		}
	}
	free(arr);
	printf("%d", abs(s1-s2));
	return 0;
}
