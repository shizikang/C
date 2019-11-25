#include <stdio.h>
int compare(int* p, int* q) {
	int t;
	t = (*p > * q) ? *p:* q;
	return t;
}
int main()
{
	int a, b,t;
	scanf_s("%d %d", &a, &b);
	t=compare(&a, &b);
	printf("%d", t);
	return 0;
}