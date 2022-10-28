#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 30  
typedef struct node1
{
	int i, j, v;            //�������Ԫ�ص��С��С�ֵ
}SPnode;                      //��Ԫ������
typedef struct node2
{
	int mu, nu, tu;                  //�����������С�����Ԫ�صĸ���
	SPnode data[MAX];                 //��Ԫ���
}SPmatrix;   
//��Ԫ���Ĵ��������
transM1(SPmatrix A)
{
	SPmatrix B;
	B.mu = A.nu;
	B.nu = A.mu;
	B.tu = A.tu;
	int p, k, q = 1;
	for (p=1;p<=A.nu;p++)
	{
		for (k=1;k<=A.tu;k++)
		{
			if (A.data[k].j==p)
			{
				B.data[q].i = A.data[k].j;
				B.data[q].j = A.data[k].i;
				B.data[q].v = A.data[k].v;
				q++;
			}
		}
	}
	for (k = 1; k <= B.tu; k++)
	{
		printf("\t%d\t%d\t%d\n",B.data[k].i,B.data[k].j,B.data[k].v);
	}
}
int main()
{
	SPmatrix A = { 6,6,7,{{0},{1,1,15},{1,5,91},{2,2,11},{3,2,3},{4,1,22},{4,3,6},{6,1,-15}} };
	transM1(A);
	return 0;
}
