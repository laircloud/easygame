#include <stdio.h>

int mainz1(void)
{
	int a = 10;
	int arr[] = { 1,5,3,4,8,9,12 };
	//��ȡa�ĵ�ַ
	// int* p = &a;
	int* p ;
	int* m = arr;
	p = &a;
	//
	printf("%p\n", &a);
	printf("%p\n", p);

	//������arrΪ������׵�ַ
	
	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);
	//printf("%d\n", m[0]);

	//ָ���һָ���������һ��Ԫ��
	//int* ָ���һ���൱�ڽ���sizeof(int)
	printf("%d\n", arr[1]);
	printf("%d\n", *(m+1));

	//��ָ��������õ�ƫ����
	return 0;
}

int mainz2(viod) {


	char ch[] = "hello world";
	char* p = &ch[4];
	int step;
	step = p - ch;
	printf("%d\n", step);
	printf("%p\n", ch);
	printf("%p\n", p);
	return 0;


}