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
#define _CRT_SECURE_NO_WARNINGS 1
//��ʾһ���˵���Ϣ

struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];  //סַ
};

struct Contact
{
	struct PeoInfo data[100];
	int sz ;//��ʾͨѶ¼�л�û����Ϣ

};
//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//��ͨѶ¼�����ϵ��
void AddContact(struct Contact* pc);

//��ʾͨѶ¼����Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(const struct Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);

//����ͨѶ¼
void SortContact(struct Contact* pc);
