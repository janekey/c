/*
 * Date: 2014��7��8��
 * Author: p_qizheng
 */
#include <stdio.h>

int main72()
{
	void func5();
	extern int A, B, C;	//�ⲿ������չ���⣬�����ļ��ı���������Ҳ����

	func5();
	func5();

	printf("%d %d %d \n", A, B, C);
	return 0;
}

//ȫ�ֱ�����Ч��Χ�����￪ʼ�������ļ�����
char AllVar = 'A';

void func5()
{
	AllVar = 'B';

	//��̬�ֲ�����������ʱ��ʼ����ֵ��ֻ�ܱ�����������
	static int a = 1;	//�´��ٵ���ʱ�����ϴε�ֵ
	a++;
	printf("func5:%d \n", a);
}

void func6()
{
	//�Ĵ����������������浽�Ĵ����С��������ڵı���ϵͳ����ʶ��Ƶ�ʸߵı������Զ�����������ڼĴ����С�
	register int a = 1;
}

int A, B, C;	//���Ա������ļ����ã�Ҫ��extern

static int AA;	//ֻ���ڱ��ļ�������

//�ڲ�������ֻ���ڱ��ļ�������
static void func7()
{}
