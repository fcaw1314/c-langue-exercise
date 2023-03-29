#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 30
#define MAX 100
//表示一个人的信息

struct PeoInfo
{
	char name[MAX_NAME];  //姓名
	char sex[MAX_SEX];    //性别
	char tele[MAX_TELE];  //电话
	int age;              //年龄
	char addr[MAX_ADDR];  //住址
};

struct Contact
{
	struct PeoInfo data[MAX];
	int sz;      //表示通讯录中还没有信息

};
//初始化通讯录
void InitContact(struct Contact* pc);

//给通讯录添加联系人
void AddContact(struct Contact* pc);

//显示通讯录的信息
void ShowContact(const struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人
void ModifyContact(struct Contact* pc);

//排序通讯录
void SortContact(struct Contact* pc);