/*
 * Date: 2014年7月7日
 * Author: p_qizheng
 */

int main71()
{
	//函数定义在main函数之后的，需要在main函数开头进行声明
	void func1();
	void func2(float,float);//声明可不写形参

	func1();
	return 0;
}

void func1(){}

void func2(float a, float b){}

//数组作为参数，传递的是第一元素的地址
