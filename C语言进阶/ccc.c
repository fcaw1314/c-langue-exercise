#define _CRT_SECURE_NO_WARNINGS 1

#include "ccc.h"

void InitContact(struct Contact* pc)
{
	assert(pc);//防止pc是空指针
	pc->sz = 0;
	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));//将pc->里面的100数据的字节数全部赋为0
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加数据\n");
		return;
	}
	//添加人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("成功添加联系人\n");
}
void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-20s\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//这里的static表示该函数只能在所在的源文件中使用，其他文件不能使用
static int FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入你想要删除人的姓名:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = ret; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("成功删除指定联系人\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入你想要查找人的姓名:>");
	scanf("%s", name);
	//查找一下指定联系人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");

		printf("%-20s\t%-5s\t%-5d\t%-20s\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);

	}
}



void ModifyContact(struct Contact* pc)
{

	printf("请输入想要修改人的名字:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[ret].age);
		printf("请输入电话:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);

		printf("修改成功\n");

	}
}


//按照年龄来排序
//int CmpByAge(const void* e1, void* e2)
//{
//	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
//}


//按照名字排序
int CmpByName(const void* e1, void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}




void SortContact(struct Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
}