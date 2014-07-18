/*
 * Date: 2014年7月18日
 * Author: p_qizheng
 */
#include <stdio.h>

enum Weekday{sun,mon,tue,wed,thu,fri,sta};	//默认值从0开始，往右一次加1
enum Weekday2 {sun2 = 7,mon2 = 1,tue2,wed2,thu2,fri2,sta2};	//设置元素的值
enum {x,y,z} a, b;	//匿名的枚举类型

int main94()
{
	enum Weekday w1 = sun;
	enum Weekday2 w2 = sun2;
	if (w1 == sun)
	{
		printf("w1 == sun\n");
	}
	printf("%d", w2);
	return 0;
}

