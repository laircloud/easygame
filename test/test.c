#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>



int main01(void)
{
	int a = 1;
	int b;
	//a = ++a * 2;
	//scanf_s("%lf", &a);
	b = sizeof(a);
	printf("%d", a==b);
	return 0;
}

int main02(void)
{
	//ð������
	int arr[10] = {0};
	int temp=0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		for (int k = 0; k < 10 - j - 1; k++)
		{
			//    >����< ���� 
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	for (int m = 0; m < 10; m++)
	{

		printf("%d\n", arr[m]);
	}

	return 0;
}

int main03(void)
{
	// һά���鶨��
	// int arr[10] = {}
	// ��ά���鶨��
	int arr[4][3] =
	{
		{1,5,6},
		{7,6,4},
		{8,6,2},
		{10,22,35},

	};
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{

			printf("%d  ", arr[i][j]);
			
		}
		printf("\n");
	}

	return 0;

}
int main04(void)
{
	int sum = 0;
	int arr[3][4] =
	{
		{98,97,98,99},
		{96,94,85,100},
		{84,100,100,99},
	};
	int i,j;
	for (i = 0; i<3; i++)
	{
		for (j = 0 ;j < 4; j++)
		{
			sum += arr[i][j];
		}
		printf("��%d��ͬѧ���ܳɼ���%d\n",i+1, sum);
		sum = 0;
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += arr[j][i];
		}
		printf("��%d��ѧ�Ƶ��ܳɼ���%d\n", i + 1, sum);
		sum = 0;
	}


	return 0;
}


int main05(void)
{
	//�����ַ���
	//ĩβ����ַ���������־\0
	//char arr[11] = "helloworld";

	char arr[100] = {0};
	scanf_s("%s",arr,100);
		
	printf("%s\n",arr);
	return 0;
}

int main06(void)
{
	//�ַ����Ƚ�

	char arr1[] = "hello world";
	char arr2[] = "hello world";
	int i = 0;
	while (arr1[i] == arr2[i])
	{
		//�ж��ַ�����β
		if (arr1[i] == '\0')
		{
			printf("�ַ�����ͬ\n");
			return 0;
		}
		i++;

	}
	printf("�ַ�����ͬ");
	return 0;
}


