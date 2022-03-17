#include <stdio.h>
#include <string.h>
typedef unsigned int ui;
//typedef 

//结构体 struct
//typedef 定义新类型 仅限于数据类型，一般结合结构体使用
typedef struct stu  student;
//结构体定义格式
/*结构体 结构体名称
{
	结构成员列表(可以是不同数据类型，基本，构造，指针)
}；
*/
//定义
typedef struct stu
{
	//编号 int 姓名 char 性别 char 成绩 int 年龄 int 地址 char
	
	int id;
	char name[21];//中文占2字符
	char sex;
	int score;
	int age;
	char addr[50];
}student;


int mains1(void)
{
	//在定义数据时，需要声明数据类型
	ui a = 10;

	printf("%d\n", a);


}


int main(void)
{
	//定义变量  别名 struct stu = student
	//struct stu ss = { 1001,"王强",'F',98,15,"东海龙宫" };
	student ss = { 1001,"王强",'F',98,15,"东海龙宫" };
	//修改成员信息
	ss.sex = 'M';
	//ss.name = "六六";错误，ss.name 是地址，不可修改
	strcpy_s(ss.name,21,"六六");
	//打印信息
	printf("编号：%d\n", ss.id);
	printf("姓名：%s\n", ss.name);
	printf("性别：%s\n", ss.sex == 'M'?"男":"女");
	return 0;
}