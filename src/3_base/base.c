/*
 * Date: 2014��7��2��
 * Author: Administrator
 */
#include <stdio.h>		//�����"stdio.h"������ϵͳ���ڵ�ǰĿ¼Ѱ���ļ������Ҳ����ٰ���׼ģʽ  ��"c:\temp\a.h"

#define PI 3.1416		//���ų�����ע����ĩû�зֺţ������ų�����ռ�ڴ棬Ԥ�����ֱ���û��ɺ����ֵ�����žͲ�������
const int a = 3;		//����������һ�ֱ�����ֵ���ܸı�*C99
/**
 * ����
 * #define x 3+3		=>		x*x = 3+3*3+3
 * const int x = 3+3	=>		x*x = 6*6
 */

/**
 * ��������:
 * int
 * short int
 * long int
 * *long long int
 * char
 * *bool
 *
 * float
 * double
 * float_complex,double_complex,long long_complex
 */

int main31()
{
	//������ϵͳ��ͬ����������ռ���ֽ����в�ͬ
	printf("short(%d)<=int(%d)<=long(%d)<=long long(%d)\n",
			sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
	printf("4.443(%d),4.443f(%d)", sizeof(4.443), sizeof(4.443f));
	return 0;
}
