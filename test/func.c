
//<>��ʾ����ϵͳ��ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//""��ʾ�����Զ����ͷ�ļ�
#include "head.h"

// ȫ�ֱ����ں����ⶨ�壬����Ŀ�о�����ʹ�ã��������ļ���ʹ����Ҫ������ extern int a 

int a = 123;

#define MAX(x,y)  ((x)>(y)?(x):(y))

// ����������extern��ʡ��
extern int main001��void��;
//int main001(int a);
//int main001(int);


int main001(viod)
{
	time_t t;
	//�������������,time ��ȡϵͳ��ǰʱ�� ����������Ϊ������� 
	srand((unsigned int)time(NULL));
	time(&t);
	//���������
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
	printf("���ֵΪ%d\n", MAX(x,y));
	
	k = ZCQ;
	l = ZC;
	printf("%d\n", k);
	printf("%d\n", l);
	return 0;

}