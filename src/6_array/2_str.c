/*
 * Date: 2014��7��3��
 * Author: Administrator
 */

#include <stdio.h>
#include <string.h>

int main()
{
	//gets,puts
	char gc[4];
//	gets(gc);		//��������㹻�󣬽���������ַ�������������ֱ�ӽ��ڴ����ĵ�ַ��ֵ����������֪���������
//	puts(gc);

	//strcat ����
	char str1[30] = "hello world";
	char str2[] = "chinaaaaaaaaaaaaaa";
	printf("%s\n", strcat(str1, str2));	//str1�����㹻��������������

	//strcpy strncpy ����
	char str3[10];
	char str4[] = "hello";
	printf("%s\n", strcpy(str3, str4));//str3���ȴ��ڵ���str4�ĳ���

	//strncpy ����n��
	char str5[10] = {};
	char str6[] = "hello";
	printf("%s\n", strncpy(str5, str6, 2));

	//strcmp �Ƚ�	�����ҵ�һ����ͬ�ַ��ıȽ�	ǰ���ַ�����>0	�����ַ�����<0
	printf("%d\n", strcmp("aaaa","aAAAA"));

	//strlen ����
	printf("%d\n", strlen("abcd"));

	//strlwr תСд
	char s[] = "DFERfdfDF";
	printf("%s\n", strlwr(s));	//����ֱ��дstrlwr("DFD")����������ʹ���������л����

	//strupr ת��д
	printf("%s\n", strupr(s));	//ͬ��

	return 0;
}
