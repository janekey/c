/*
 * Date: 2014年7月15日
 * Author: p_qizheng
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1, i;
	p1 = malloc(5 * sizeof(int));	//分配100个字节长度的连续内存空间

	for (i = 0; i < 5; i++)
	{
		*(p1 + i) = i + 1;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p1++);
	}

	calloc(100, 4);	//分配4个100字节的连续空间
	realloc(p1, 20);	//重新分配
	free(p1);	//释放动态空间

	return 0;
}

