#include<stdio.h>
int main()
{
	int j, i, t;
	t = 0;
	int a[6] = { 1,6,5,4,8,2 };
	for (i = 1;i < 5;i++)
	{
		for (j = 0;j < 6 - i;j++)
		{
			if (a[j] < a[j + 1]) 
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0;i < 6;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}