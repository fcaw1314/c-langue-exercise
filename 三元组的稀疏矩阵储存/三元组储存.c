#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct
{
	int i, j;
	int v;
}jz;
typedef struct
{
	int mu, nu, tu;
	jz data[7];
}jzp;
insert(int arr[6][6])
{
	int x, y, q = 0;
	jzp a;
	for (x = 0; x < 6; x++)
	{
		for (y = 0; y < 6; y++)
			if (arr[x][y] != 0)
			{
				a.data[q].i = x + 1;
				a.data[q].j = y + 1;
				a.data[q].v = arr[x][y];
				q++;
			}
	}
	for (x = 0; x < 7; x++)
		printf("%d %d %d\n", a.data[x].i, a.data[x].j, a.data[x].v);
}
int main()
{
	int arr[6][6] = { 15,0,0,0,91,0,0,11,0,0,0,0,0,3,0,0,0,0,22,0,6,0,0,0,0,0,0,0,0,0,-15,0,0,0,0,0 };
	//jz a;
	insert(arr);

	system("pause");
}