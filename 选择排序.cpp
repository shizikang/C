#include<stdio.h>
int main()
{
	int j, i, k, t;
	int a[6] = { 2,3,8,7,4,5 };
	for (i = 0;i < 5;i++) {
		k = i;
			for (j = i + 1;j < 6;j++) {
				if (a[k] < a[j]) {
					k = j;
				}
			}
			if (a[k] != a[i]) {
				t = a[k];
				a[k] = a[i];
				a[i] = t;
			}
	}
	for (i = 0;i < 6;i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
