#include <stdio.h>
#include <string.h>
typedef unsigned int ui;
//typedef 

//�ṹ�� struct
//typedef ���������� �������������ͣ�һ���Ͻṹ��ʹ��
typedef struct stu  student;
//�ṹ�嶨���ʽ
/*�ṹ�� �ṹ������
{
	�ṹ��Ա�б�(�����ǲ�ͬ�������ͣ����������죬ָ��)
}��
*/
//����
typedef struct stu
{
	//��� int ���� char �Ա� char �ɼ� int ���� int ��ַ char
	
	int id;
	char name[21];//����ռ2�ַ�
	char sex;
	int score;
	int age;
	char addr[50];
}student;


int mains1(void)
{
	//�ڶ�������ʱ����Ҫ������������
	ui a = 10;

	printf("%d\n", a);


}


int main(void)
{
	//�������  ���� struct stu = student
	//struct stu ss = { 1001,"��ǿ",'F',98,15,"��������" };
	student ss = { 1001,"��ǿ",'F',98,15,"��������" };
	//�޸ĳ�Ա��Ϣ
	ss.sex = 'M';
	//ss.name = "����";����ss.name �ǵ�ַ�������޸�
	strcpy_s(ss.name,21,"����");
	//��ӡ��Ϣ
	printf("��ţ�%d\n", ss.id);
	printf("������%s\n", ss.name);
	printf("�Ա�%s\n", ss.sex == 'M'?"��":"Ů");
	return 0;
}