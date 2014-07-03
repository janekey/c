/*
 * base_inout.c
 *
 *  Created on: 2014年7月3日
 *      Author: p_qizheng
 */
#include <stdio.h>

int main32()
{
	/**
	 * %u 无符号十进制
	 * %d 十进制	%5d 占5列		%ld 长整形	%lld 双长整形
	 * %c 字符	%5c 占5列
	 * %s 字符串	%5s 占5列
	 * %f 实数	%m.nf 数据m列，小数n列		%-m.nf 与上面一样，向左对齐	%lf 双精度
	 * %e 指数 小数6位，指数5列	%m.ne
	 * %i 与%d相同
	 * %o 八进制整数
	 * %x 十六进制整数
	 */
	int a;
	double b;
	long c = 1l;
	scanf("%d%lf%d", &a, &b, &c);
	printf("%d,%lf,%d\n", a, b, c);

	printf("%5d,%7.2f,%5s，%e,%o,%x\n",43,43.343,"dd",4343.44,44,44);

	char x = getchar();
	putchar(x);
	return 0;
}
