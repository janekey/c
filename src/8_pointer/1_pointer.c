/*
 * Date: 2014��7��9��
 * Author: p_qizheng
 */

#include <stdio.h>

int main81()
{
	void p_func1(int *p1, int *p2);

	int a = 3;
	int b = 4;
	int *pointer;
	pointer = &a;	//��a�ĵ�ַ�ŵ�pointer��
	printf("%d\n", *pointer);		//*pointer��ʾpointerָ��Ķ���pointer��ʾ��ַ

	int *p1 = &a;	//����ͬʱ��ʼ��
	int *p2 = &b;
	int *p;

	//��ַ����
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
	//�ı�ʵ��ָ��ֵ�����ܺ����ı�ʵ��ָ���ֵ�������Ըı�ʵ��ָ��ָ��ı�����ֵ��
	*p1 = 333;
	*p2 = 421;

	printf("%d\n", *p1);
	int x = 858;
	p1 = &x;	//�β�ָ��p1��ֵ���ˣ�����ʵ��ָ���ֵ���䣡�������Ժ����߼���ʵ�β�Ӱ��
	*p1 = x;
	printf("%d\n", *p1);
}
