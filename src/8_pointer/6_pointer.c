/*
 * Date: 2014��7��15��
 * Author: p_qizheng
 */
#include <stdio.h>

int main86()
{
	int *func_p1(int a, int b);	//����һ��int���͵�ָ��

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
