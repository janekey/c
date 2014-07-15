/*
 * Date: 2014年7月15日
 * Author: p_qizheng
 */
#include <stdio.h>

int main86()
{
	int *func_p1(int a, int b);	//返回一个int类型的指针

	int *t = func_p1(3,1);
	printf("%d\n", *t);
	return 0;
}

int *func_p1(int a, int b)
{
	int *t;
	int sum = a + b;
	t = &sum;
	return t;
}
