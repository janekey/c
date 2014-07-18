/*
 * Date: 2014年7月18日
 * Author: p_qizheng
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * 数据文件分为"ASCII文件"(文本文件)和"二进制文件"
 * 数据在内存中存储的是二进制形式
 */
int main()
{
	char *path = "e:/ctest.log";
	//写入
	FILE *fp;
	//fp指向内存中的文件信息区的开头
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

	fclose(fp);	//fclose保证缓冲区中的数据输出到磁盘文件，然后才撤销文件信息区

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
