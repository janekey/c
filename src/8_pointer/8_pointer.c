/*
 * Date: 2014��7��15��
 * Author: p_qizheng
 */
#include <stdio.h>
#include <stdlib.h>

int main88()
{
	int *p1, i;
	p1 = malloc(5 * sizeof(int));	//����100���ֽڳ��ȵ������ڴ�ռ�

	for (i = 0; i < 5; i++)
	{
		*(p1 + i) = i + 1;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p1++);
	}

	calloc(100, 4);	//����4��100�ֽڵ������ռ�
	realloc(p1, 20);	//���·���
	free(p1);	//�ͷŶ�̬�ռ�

	return 0;
}

