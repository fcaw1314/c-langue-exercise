#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ������������������ȡ���ػ�
//
//�ڵ����ϵ�cmd��������
//shutdown -s -t 60  =  ���Խ���һ�����ڹػ�
//shutdown -a  =  ȡ���ػ�
//
int main()
{
	//�ػ�
	//C�����ṩ��һ��������system()-ִ��ϵͳ����
	char input[20] = {0};//����������Ϣ
	system("shutdown -s -t 30");//system��Ҫ����#include<stdlib.h>ͷ�ļ�
again:
	printf("��ע�⣬��ĵ��Խ���30s�ڹػ� ��������룻���������Ұְ֣���ȡ���ػ���\n");
	//strcmp�������ַ���֮��ıȽϺ�������Ҫ����#include<string.h>ͷ�ļ�
	scanf("%s",input);
	if ((strcmp(input, "���������Ұְ�")) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//goto���ֻ����һ��������Χ����ת�����ܿ纯��
//������ʹ��