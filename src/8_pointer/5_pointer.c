/*
 * Date: 2014��7��15��
 * Author: p_qizheng
 */
#include <stdio.h>

int main85()
{
	int func_sum(int a, int b);
	int func_add(int a);
	void func_p(int (*p1)(int), int (*p2)(int,int));

	//ָ������ָ��
	int (*p)(int,int);

	p = func_sum;
	int sum = (*p)(1,2);	//p���ߵ����Ų���ʡ��
	printf("%d\n", sum);

	func_p(func_add, func_sum);	//����������������ڵ�ַ

	return 0;
}

int func_sum(int a, int b)
{
	return a+b;
}

int func_add(int a)
{
	return a;
}

void func_p(int (*p1)(int), int (*p2)(int,int))
{
	int a = (*p1)(3);
	int b = (*p2)(2,3);
}
