#include <stdio.h>

int mainz1(void)
{
	int a = 10;
	int arr[] = { 1,5,3,4,8,9,12 };
	//获取a的地址
	// int* p = &a;
	int* p ;
	int* m = arr;
	p = &a;
	//
	printf("%p\n", &a);
	printf("%p\n", p);

	//数组名arr为数组的首地址
	
	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);
	//printf("%d\n", m[0]);

	//指针加一指向数组的下一个元素
	//int* 指针加一，相当于接了sizeof(int)
	printf("%d\n", arr[1]);
	printf("%d\n", *(m+1));

	//两指针相减，得到偏移量
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