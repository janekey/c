/*
 * Date: 2014��7��15��
 * Author: p_qizheng
 */
#include <stdio.h>

int main87(int argc, char *argv[])	//argc:��������
{
	void print_string(char *s[], int n);
	fun_87();

	char *p[] = {"Hello","World","Haha","China"};	//ָ������

	print_string(p, 4);

	char *t = p[0];
	p[0] = p[2];
	p[2] = t;

	print_string(p, 4);
	fun_87();

	return 0;
}

void print_string(char *s[], int n)
{
	char **p;	//ָ��ָ���ָ��
	int i;
	for(i = 0; i < n; i++)
	{
		p = s + i;
		printf("%s ", *p);	//������ȼ�
//		printf("%s ", s[i]);
	}
	printf("\n");
}

void fun_87()
{
	int a[5] = {1,3,4,6,7};
	int *num[] = {&a[0],&a[1],&a[2],&a[3],&a[4]};	//ָ�������Ԫ��ֻ�ܴ�ŵ�ַ!!!
	int **p, i;
	p = num;	//num[0]
	for (i = 0; i < 5; i++)
	{
		printf("%d ", **p);
		p++;
	}
}

