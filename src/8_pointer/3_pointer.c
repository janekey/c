/*
 * Date: 2014年7月14日
 * Author: Administrator
 */

#include <stdio.h>
/**
 * 指针指向二维数组
 * a[i]	-> *(a+i)
 * a[i][j] <- *(a[i]+j) <- *(*(a+i)+j)
 */

int main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};

	printf("a[0]length:%d\n", sizeof(a[0]));	//这里可以看出a[0]的长度是3个int，即第一行的长度。a[o]是第一行的首元素地址

	//p指向整型数据
	int *p;
	for (p = a[0]; p < a[0] + 6; p++)
	{
		if ((p - a[0]) % 3 == 0) printf("\n");
		printf("%4d", *p);
	}
	printf("\n");

	//p2指向有3个整型元素的数组
	int (*p2)[3];
	p2 = a;
	printf("%d\n", *(*(p2+1)+2));

	return 0;
}
