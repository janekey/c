/*
 * Date: 2014年7月9日
 * Author: p_qizheng
 */

#include <stdio.h>

int main()
{
	int a = 3;
	int *pointer;
	pointer = &a;	//将a的地址放到pointer中
	printf("%d", *pointer);		//*pointer表示pointer指向的对象，pointer表示地址

	int *p1 = &a;	//定义同时初始化
	return 0;
}
