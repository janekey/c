/*
 * Date: 2014��7��11��
 * Author: p_qizheng
 */

#include <stdio.h>

int main82()
{
	int a[5] = {3,5,6,4};
	int *p;

	//���������ȼ�(������������Ԫ�صĵ�ַ)
	p = &a[0];
	p = a;

	int *b = a;		//������a��ָ���ͳ���������a++�Ǵ����

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);	//����ʱ��a[i]���ǰ�*(a+i)�������
		printf("%d\t", *(a + i));
		printf("%d\n", *(b + i));
	}
	printf("\n");

	b = a;
	for (; b < a + 5; b++)	//Ч�ʸ�
	{
		printf("%d ", *b);
	}
//	while(*b != NULL) {
//		printf("%d ", *b);
//		b++;
//	}
	printf("\n");

	return 0;
}

//��������д���ǵȼ۵�
void p_func2(int arr[], int n){}
void p_func3(int *a, int n){}
