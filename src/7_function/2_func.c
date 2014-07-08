/*
 * Date: 2014年7月8日
 * Author: p_qizheng
 */
#include <stdio.h>

int main72()
{
	void func5();
	extern int A, B, C;	//外部变量扩展到这，其他文件的变量，函数也可以

	func5();
	func5();

	printf("%d %d %d \n", A, B, C);
	return 0;
}

//全局变量有效范围从这里开始，到本文件结束
char AllVar = 'A';

void func5()
{
	AllVar = 'B';

	//静态局部变量，编译时初始化初值，只能被本函数引用
	static int a = 1;	//下次再调用时保存上次的值
	a++;
	printf("func5:%d \n", a);
}

void func6()
{
	//寄存器变量，将变量存到寄存器中。不过现在的编译系统都能识别频率高的变量，自动将变量存放在寄存器中。
	register int a = 1;
}

int A, B, C;	//可以被其他文件引用，要加extern

static int AA;	//只限于本文件内引用

//内部函数，只限于本文件内引用
static void func7()
{}
