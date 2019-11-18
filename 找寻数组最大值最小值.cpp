#include <stdio.h>
int main()
{
	int a[6];
	int j,i;
	int t;
	for ( i = 0;i < 6;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0;i < 6;i++) {
		for (j = 0;j < 6- i-1;j++)
		{
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("最大是%d", a[0]);
	printf("最小是%d", a[5]);
	return 0;
}
