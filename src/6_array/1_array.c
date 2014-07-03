/*
 * Date: 2014年7月3日
 * Author: p_qizheng
 */
#include <stdio.h>

int main61()
{
	//声明
	int a[10];				//必须先初始化再使用
	int b[5] = {0,1,2,3,4};	//初始化列表
	int c[5] = {0,1,2};		//后面元素自动设为0,字符型为'\0'，指针型为NULL
	int d[] = {0,1,2,3,4};	//长度为5

	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
//		printf("%d ", a[i]);
	}


	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}

	printf("\n");
	float fa[3][4];
	float fb[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};	//初始化
	float fc[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};			//等同上
	float fd[3][4] = {{1},{5},{9}};		//剩下设为0
	float fe[3][4] = {{1},{5,6}};

	printf("\n");

	char ca[5];
	char cb[6] = {'H','e','l','l','o'};
	char cc[6] = {'x','b'};				//默认为'\0',输出时遇到\0字符串结束，把前面的字符列为有效字符
	char cd[] = {"Hello"};			//数组长度为6位，最后一位是'\0'
	char ce[] = "Hello";			//等同上
	char cf[6] = {'H','e','\0','l','l','o'};

	for (i = 0; i < 6; i++)
	{
		printf("%c ", cb[i]);
	}
	printf("\n");
	printf("%s,%s\n", cf, &cf[1]);		//遇到第一个'\0'则结束，参数必须是字符数组起始地址(数组名)，不能是数组元素
	printf("%o\n", cb);		//八进制输出起始地址

	return 0;
}

void func(int n)
{
	int a[n * 2];	//通过参数设置数组长度, static int a[n*2]则不行
	int i = 0;
	for (; i < n * 2; i++)
	{
		printf("%d ", a[i]);
	}
}

