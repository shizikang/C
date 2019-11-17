//#include<stdio.h>
//int main()
//{
//	int  j,  i;
//	int m;
//	for (i = 1;i <=1000;i++)
//	{
//		m = 0;
//		for (j = 1;j < i;j++)
//		{ 
//			if (i%j==0)
//			{
//				m = m + j;
//			}
//		}
//		if (i == m)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	for (int i = 2;i <= a;i=i*2) {
		if (a == i)
			printf("yes");
	}
}
