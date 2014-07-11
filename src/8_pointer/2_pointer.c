/*
 * Date: 2014年7月11日
 * Author: p_qizheng
 */

#include <stdio.h>

int main()
{
	int a[5] = {3,5,6,4};
	int *p;

	//下面两个等价(数组名就是首元素的地址)
	p = &a[0];
	p = a;

	int *b = a;		//数组名a是指针型常量，所以a++是错误的

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);	//编译时a[i]就是按*(a+i)处理的
		printf("%d\t", *(a + i));
		printf("%d\n", *(b + i));
	}
	printf("\n");

	b = a;
	for (; b < a + 5; b++)	//效率高
	{
		printf("%d ", *b);
	}
//	while(*b != NULL) {
//		printf("%d ", *b);
//		b++;
//	}
	printf("\n");

	return 0;
}

//下面两种写法是等价的
void p_func2(int arr[], int n){}
void p_func3(int *a, int n){}
