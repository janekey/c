/*
 * Date: 2014��7��18��
 * Author: p_qizheng
 */
#include <stdio.h>

enum Weekday{sun,mon,tue,wed,thu,fri,sta};	//Ĭ��ֵ��0��ʼ������һ�μ�1
enum Weekday2 {sun2 = 7,mon2 = 1,tue2,wed2,thu2,fri2,sta2};	//����Ԫ�ص�ֵ
enum {x,y,z} a, b;	//������ö������

int main94()
{
	enum Weekday w1 = sun;
	enum Weekday2 w2 = sun2;
	if (w1 == sun)
	{
		printf("w1 == sun\n");
	}
	printf("%d", w2);
	return 0;
}

