#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ1000��-2000��֮�������
//�ܹ���4�������Ҳ��ܱ�100����
//�ܹ���400����
int main01()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�ǲ�������
		if (year % 4 == 0 )
		{
			if (year % 100 != 0)
			{
				printf("%d ",year);
				count++;
			}
		}
		if (year % 400 == 0 )
		{
			printf("%d ",year);
			count++;
		}
	} 	
	printf("\n count = %d\n",count);
	return 0;
}
int main02()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf( " %d ",year);
			count++;
		}
	}
	printf("\ncount= %d\n",count);
	return 0;
}
//��ӡ��100-200������
//����=����
//������=ֻ�ܱ�1�ͱ�������
int main()
{
	int i=0;
	int j;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�ж�2---i-1֮�������ȥ��i�����ܲ�������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			printf("%d ",i);//����
		}
	}	
		printf("\ncount=  %d\n",count);
	return 0;
}