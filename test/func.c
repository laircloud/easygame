
//<>表示导入系统的头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//""表示导入自定义的头文件
#include "head.h"

// 全局变量在函数外定义，在项目中均可以使用，在其他文件中使用需要加声明 extern int a 

int a = 123;

#define MAX(x,y)  ((x)>(y)?(x):(y))

// 函数声明，extern可省略
extern int main001（void）;
//int main001(int a);
//int main001(int);


int main001(viod)
{
	time_t t;
	//创建随机数种子,time 获取系统当前时间 ，并将其作为随机种子 
	srand((unsigned int)time(NULL));
	time(&t);
	//生成随机数
	printf("%d\n", rand() % 10);
	printf("%lld\n",  t);
	return 0;
}

int main002(void)
{
	int x = 2;
	int y = 56;
	int k;
	int l;
	printf("hello world\n");
	main001();
	printf("最大值为%d\n", MAX(x,y));
	
	k = ZCQ;
	l = ZC;
	printf("%d\n", k);
	printf("%d\n", l);
	return 0;

}