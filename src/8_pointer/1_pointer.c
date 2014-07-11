/*
 * Date: 2014年7月9日
 * Author: p_qizheng
 */

#include <stdio.h>

int main81()
{
	void p_func1(int *p1, int *p2);

	int a = 3;
	int b = 4;
	int *pointer;
	pointer = &a;	//将a的地址放到pointer中
	printf("%d\n", *pointer);		//*pointer表示pointer指向的对象，pointer表示地址

	int *p1 = &a;	//定义同时初始化
	int *p2 = &b;
	int *p;

	//地址交换
	p = p1;
	p1 = p2;
	p2 = p;
	printf("%d,%d\n", *p1, *p2);

	p_func1(p1, p2);
	printf("%d,%d\n", *p1, *p2);
	return 0;
}

void p_func1(int *p1, int *p2)
{
	//改变实参指向值（不能函数改变实参指针的值，但可以改变实参指针指向的变量的值）
	*p1 = 333;
	*p2 = 421;

	printf("%d\n", *p1);
	int x = 858;
	p1 = &x;	//形参指针p1的值变了，不过实参指针的值不变！！！所以后面逻辑对实参不影响
	*p1 = x;
	printf("%d\n", *p1);
}
