#include <stdio.h>
void swap(int* p, int* q) {
	int temp;
	temp = *p;
		* p = *q;
		* q = temp;
}
int main()
{
	int a, b, * p, * q;
	printf("输入a b的值：");
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}