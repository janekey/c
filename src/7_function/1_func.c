/*
 * Date: 2014��7��7��
 * Author: p_qizheng
 */
#include <stdio.h>

int main71()
{
	//����������main����֮��ģ���Ҫ��main������ͷ��������
	void func1();
	void func2(float,float);//�����ɲ�д�β�
	void func3(int a[]);
	void func4(int a[][3], int n);

	func1();

	int a[2] = {1,2};
	func3(a);
	printf("\n");

	int b[3][3] = {{3,4,4},{6,7,5},{4,2}};
	func4(b, 3);

	return 0;
}

void func1(){}


void func2(float a, float b){
}

//������Ϊ���������ݵ��ǵ�һԪ�صĵ�ַ��
//c���Բ�����β������С��ֻ�ǽ�ʵ�������һԪ�ص�ַ�����β��������������β������Сָ��ָ��������
void func3(int a[])
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", a[i]);
	}
}

//c���Բ�����һά�Ĵ�С
void func4(int a[][3], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

