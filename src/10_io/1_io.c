/*
 * Date: 2014��7��18��
 * Author: p_qizheng
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * �����ļ���Ϊ"ASCII�ļ�"(�ı��ļ�)��"�������ļ�"
 * �������ڴ��д洢���Ƕ�������ʽ
 */
int main()
{
	char *path = "e:/ctest.log";
	//д��
	FILE *fp;
	//fpָ���ڴ��е��ļ���Ϣ���Ŀ�ͷ
	if ((fp = fopen(path, "w")) == NULL)
	{
		printf("cannot write file");
		exit(0);
	}

	char ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}

	fclose(fp);	//fclose��֤�������е���������������ļ���Ȼ��ų����ļ���Ϣ��

	printf("\n********\n");

	if ((fp = fopen(path, "r")) == NULL)
	{
		printf("cannot read file");
		exit(0);
	}
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%d", ch);
//		putchar(ch);
	}
	fclose(fp);



	return 0;
}
