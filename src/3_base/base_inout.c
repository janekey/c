/*
 * base_inout.c
 *
 *  Created on: 2014��7��3��
 *      Author: p_qizheng
 */
#include <stdio.h>

int main()
{
	/**
	 * %u �޷���ʮ����
	 * %d ʮ����	%5d ռ5��		%ld ������	%lld ˫������
	 * %c �ַ�	%5c ռ5��
	 * %s �ַ���	%5s ռ5��
	 * %f ʵ��	%m.nf ����m�У�С��n��		%-m.nf ������һ�����������	%lf ˫����
	 * %e ָ�� С��6λ��ָ��5��	%m.ne
	 * %i ��%d��ͬ
	 * %o �˽�������
	 * %x ʮ����������
	 */
	int a;
	double b;
	long c = 1l;
	scanf("%d%lf%ld", &a, &b, &c);
	printf("%d,%lf,%ld\n", a, b, c);

	printf("%5d,%7.2f,%5s��%e,%o,%x\n",43,43.343,"dd",4343.44,44,44);

	char x = getchar();
	putchar(x);
	return 0;
}
