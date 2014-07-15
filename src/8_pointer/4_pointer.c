/*
 * Date: 2014年7月15日
 * Author: p_qizheng
 */
#include <stdio.h>

int main84()
{
	char str1[] = "Hello";
	char *str1_p = "China";
	char *str1_p2;
	str1_p2 = "Hello";

	printf("%d\n", sizeof(str1));//最后自动加'\0'

	char c1[10], c2[10];
	copy1(str1, c1);
	copy2(str1_p, c2);

	printf("%s\n", c1);
	printf("%s\n", c2);

	str1[0] = 'X';
	//str1_p[0] = 'X'; //错误，指针指向的是常量
	return 0;
}
void copy1(char a[], char b[])
{
	int i;
	for (i = 0; i < *(a + i) != '\0'; i++)
	{
		*(b + i) = *(a + i);
	}
	*(b + i) = '\0';
}

void copy2(char a[], char b[])
{
	char *p1 = a, *p2 = b;
	for(; *p1 != '\0'; p1++,p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
}

void copy3(char *from, char *to)
{
	while((*to = *from) != '\0')
	{
		from++;to++;
	}
}

void copy4(char *from, char *to)
{
	while((*to++ = *from++) != '\0');
	//while(*to++ = *from++);
}

