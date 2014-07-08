/*
 * Date: 2014年7月7日
 * Author: p_qizheng
 */
#include <stdio.h>

int main71()
{
	//函数定义在main函数之后的，需要在main函数开头进行声明
	void func1();
	void func2(float,float);//声明可不写形参
	void func3(int a[]);
	void func4(int a[][3], int n);

	func1();

	int a[2] = {1,2};
	func3(a);
	printf("\n");

	int b[3][3] = {{3,4,4},{6,7,5},{4,2}};
	func4(b, 3);

	return 0;
}

void func1(){}


void func2(float a, float b){
}

//数组作为参数，传递的是第一元素的地址。
//c语言不检查形参数组大小，只是将实参数组第一元素地址传给形参数组名，所以形参数组大小指不指定都可以
void func3(int a[])
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", a[i]);
	}
}

//c语言不检查第一维的大小
void func4(int a[][3], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

