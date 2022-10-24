#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MIZE 50
//定义串
typedef struct node
{
	char elem[MIZE];
	int length;
}string;
//串的定位
 StrIndex(string* s, string* t)
{
	int i = 0;
	int j = 0;
	while (i < s->length && j < t->length)
	{
		if (s->elem[i] == t->elem[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
		if (j == t->length)
		{
			return i - j + 1;
		}
		else
			return -1;
	
}
 //串的替换
 StrRep(string *s,string *t,string *r)
 {
	 int i, j;
	 while ((i = StrIndex(s,t)) != -1)
	 {
		 if (r->length > t->length)
		 {
			 for (j = s->length; j >= i - 1 + t->length; j--)
			 {
				 s->elem[j +r->length - t->length] = s->elem[j];
			 }
		 }
		 else if (r->length < t->length)
		 {
			 for (j = i - 1 + t->length; j <= s->length; j++)
			 {
				 s->elem[j + r->length - t->length] = s->elem[j];
			 }
		 }
		 for (j = 0; j < r->length; j++)
		 {
			 s->elem[i - 1 + j] = r->elem[j];
		 }
			 s->length = s->length +r ->length - t->length;
		 
	 }
 }
	int main()
	{
		int m;
		string s = {"abljkdeljkfgghljkmklljk",23};
		string t = { "ljk",3 };
		string r = { "0000000",7 };
		//m=StrIndex(&s,&t);
		//printf("%d",m);
		StrRep(&s, &t, &r);
		 printf("%s\n",s.elem);
		return 0;
	}
