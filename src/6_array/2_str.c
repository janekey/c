/*
 * Date: 2014年7月3日
 * Author: Administrator
 */

#include <stdio.h>
#include <string.h>

int main()
{
	//gets,puts
	char gc[4];
//	gets(gc);		//数组必须足够大，接纳输入的字符串。若不够会直接将内存后面的地址赋值，产生不可知的情况发生
//	puts(gc);

	//strcat 连接
	char str1[30] = "hello world";
	char str2[] = "chinaaaaaaaaaaaaaa";
	printf("%s\n", strcat(str1, str2));	//str1必须足够大容纳两个数组

	//strcpy strncpy 复制
	char str3[10];
	char str4[] = "hello";
	printf("%s\n", strcpy(str3, str4));//str3长度大于等于str4的长度

	//strncpy 复制n个
	char str5[10] = {};
	char str6[] = "hello";
	printf("%s\n", strncpy(str5, str6, 2));

	//strcmp 比较	自左到右第一个不同字符的比较	前面字符串大>0	后面字符串大<0
	printf("%d\n", strcmp("aaaa","aAAAA"));

	//strlen 长度
	printf("%d\n", strlen("abcd"));

	//strlwr 转小写
	char s[] = "DFERfdfDF";
	printf("%s\n", strlwr(s));	//不能直接写strlwr("DFD")，参数不能使常量，运行会出错

	//strupr 转大写
	printf("%s\n", strupr(s));	//同上

	return 0;
}
