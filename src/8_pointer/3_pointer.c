/*
 * Date: 2014��7��14��
 * Author: Administrator
 */

#include <stdio.h>
/**
 * ָ��ָ���ά����
 * a[i]	-> *(a+i)
 * a[i][j] <- *(a[i]+j) <- *(*(a+i)+j)
 */

int main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};

	printf("a[0]length:%d\n", sizeof(a[0]));	//������Կ���a[0]�ĳ�����3��int������һ�еĳ��ȡ�a[o]�ǵ�һ�е���Ԫ�ص�ַ

	//pָ����������
	int *p;
	for (p = a[0]; p < a[0] + 6; p++)
	{
		if ((p - a[0]) % 3 == 0) printf("\n");
		printf("%4d", *p);
	}
	printf("\n");

	//p2ָ����3������Ԫ�ص�����
	int (*p2)[3];
	p2 = a;
	printf("%d\n", *(*(p2+1)+2));

	return 0;
}
