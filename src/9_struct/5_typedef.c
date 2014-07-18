/*
 * Date: 2014年7月18日
 * Author: p_qizheng
 */
#include <stdio.h>

//指定新的类型名称代替已有的名称（使用方式：在声明变量的变量改成新类型名，前面加上typedef）
typedef int Integer;
typedef struct {
	int a;
	int b;
} Obj;	//直接用Obj，而不用再用"struct Obj"
typedef int Num[100];	//Num a表示int a[100]
typedef char * String;

