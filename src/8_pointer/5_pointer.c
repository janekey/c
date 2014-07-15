/*
 * Date: 2014年7月15日
 * Author: p_qizheng
 */
#include <stdio.h>

int main85()
{
	int func_sum(int a, int b);
	int func_add(int a);
	void func_p(int (*p1)(int), int (*p2)(int,int));

	//指向函数的指针
	int (*p)(int,int);

	p = func_sum;
	int sum = (*p)(1,2);	//p两边的括号不能省略
	printf("%d\n", sum);

	func_p(func_add, func_sum);	//函数名代表函数的入口地址

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
