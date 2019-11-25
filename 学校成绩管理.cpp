#include <stdio.h>
int main()
{
	int a[5][4];
	int i, j,sum=0,aver=0;
	int(*p)[4];
	p = a;
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 4;j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0;i < 5;i++) {
		sum += **(p + i);
	}
	aver = sum / 5;
	printf("语文平均成绩为%d\n", aver);
	for (i = 0;i < 5;i++) {
		sum = 0; 
		aver = 0;
		for (j = 0;j < 4;j++) {
			sum += *(*(p + i) + j);
		}
		aver = sum / 4;
		printf("平均成绩分别是%d\n", aver);
	}
	return 0;
}
