/*
 * Date: 2014年7月4日
 * Author: p_qizheng
 */

#include <stdio.h>

//求素数
void primeNum()
{
	int num[100], i = 0;
	for (; i < 100; i++) {
		num[i] = i + 1;
	}

	int j = 2;
	for (i = 1; i < 100; i++) {
		short tmp = 0;
		for (j = 2; j < num[i]; j++) {
			if (num[i] % j == 0)
				tmp = 1;
		}
		if (tmp == 0)
			printf("%d ", num[i]);
	}
}



int mainT() {
	primeNum();
	return 0;
}
