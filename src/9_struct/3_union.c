/*
 * Date: 2014��7��18��
 * Author: p_qizheng
 */
#include <stdio.h>

//�����壬ͬһ���ڴ��Ų�ͬ���ͱ���
union Data
{
	int i;
	char ch;
	float f;
};

struct Person
{
	int num;
	char job;
	union {
		int class;
		char position[10];
	} category;
};
int main93()
{
	union Data a = {60},
			b = {.ch='X'}, c;	//��ʼ����ֻ����һ�����������ܳ�ʼ�������Ա��

	printf("%d,%c,%f", a.i, a.ch, a.f);


	printf("\n*******\n");
	struct Person p[2] = {};
	p[0].job = 'A'; p[0].category.class = 1;
	p[1].job = 'B'; strcpy(p[1].category.position, "Nama");

	int i;
	for (i = 0; i < 2; i++)
	{
		if (p[i].job == 'A') {
			printf("%d\n", p[i].category.class);
		} else if (p[i].job == 'B') {
			printf("%s\n", p[i].category.position);
		}
	}

	return 0;
}

