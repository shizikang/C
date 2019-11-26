#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c) {
		if (a + c > b) {
			if (c + b > a) {
				if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
					printf("yes\n");
				}
			}
		}
	}
}
