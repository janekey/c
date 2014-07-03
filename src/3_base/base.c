/*
 * Date: 2014年7月2日
 * Author: Administrator
 */
#include <stdio.h>		//如果是"stdio.h"，编译系统现在当前目录寻找文件，若找不到再按标准模式  或"c:\temp\a.h"

#define PI 3.1416		//符号常量（注意行末没有分号）：符号常量不占内存，预编译后直接置换成后面的值，符号就不存在了
const int a = 3;		//常变量：是一种变量，值不能改变*C99
/**
 * 区别
 * #define x 3+3		=>		x*x = 3+3*3+3
 * const int x = 3+3	=>		x*x = 6*6
 */

/**
 * 基本类型:
 * int
 * short int
 * long int
 * *long long int
 * char
 * *bool
 *
 * float
 * double
 * float_complex,double_complex,long long_complex
 */

int main31()
{
	//各编译系统不同，基本类型占用字节略有不同
	printf("short(%d)<=int(%d)<=long(%d)<=long long(%d)\n",
			sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
	printf("4.443(%d),4.443f(%d)", sizeof(4.443), sizeof(4.443f));
	return 0;
}
