/*
 * Date: 2014年7月17日
 * Author: p_qizheng
 */
#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Date birth;
};

int main()
{
	struct Student stu1 = {1, "Jackey", 'M', 20, {1990,11,1}},
			stu2 = {.name="Money"};//对部分成员初始化
	printf("No.\tName\tSex\tAge\tBirthDay\n");
	char *f = "%-3d\t%-8s%c\t%-3d\t%d-%d-%d\n";
	printf(f, stu1.num, stu1.name, stu1.sex, stu1.age, stu1.birth.year, stu1.birth.month, stu1.birth.day);
	printf(f, stu2.num, stu2.name, stu2.sex, stu2.age, stu2.birth.year, stu2.birth.month, stu2.birth.day);


	struct Student stu[5] = {};//初始化
	int i;
	for (i = 0; i < 5; i++) {
		stu[i].num = i + 10;

		strcpy(stu[i].name, "*name*");
		stu[i].sex = 'W';

		printf(f, stu[i].num, stu[i].name, stu[i].sex, stu[i].age,
				stu[i].birth.year, stu[i].birth.month, stu[i].birth.day);
	}

	struct Student stu_arr[2] = {{.name="Haha"}, {.name="Haha2"}};
	return 0;
}

