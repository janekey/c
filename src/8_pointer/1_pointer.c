/*
 * Date: 2014��7��9��
 * Author: p_qizheng
 */

#include <stdio.h>

int main()
{
	int a = 3;
	int *pointer;
	pointer = &a;	//��a�ĵ�ַ�ŵ�pointer��
	printf("%d", *pointer);		//*pointer��ʾpointerָ��Ķ���pointer��ʾ��ַ

	int *p1 = &a;	//����ͬʱ��ʼ��
	return 0;
}
