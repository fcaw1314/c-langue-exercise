#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//EOF - end of file
//scanf读取数据，如果读到了数据，返回的是实际读到的数据的个数
//如果没有读到数据，说明读取失败，返回的是EOF(-1)
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int ret = scanf("%d %d", &a, &b);
//	//printf("ret = %d\n", ret);
//
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		//读取到2个数字，scanf返回的是2
//	}
//
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		//读取到2个数字，scanf返回的是2
//		//读取到1个数字，scanf返回的是1
//	}
//
//	while (~scanf("%d %d", &a, &b))
//	{
//		//scanf读取失败的时候返回的是EOF，也就是-1
//		//-1的补码是
//		//11111111111111111111111111111111
//		//当对scanf的返回值~（按位取反的时候）得到的是0
//	}
//
//	return 0;
//}
//

//
//研究一下printf函数的返回值的
//

#include <stdio.h>
/*
int main() {
    int arr[7] = {0};
    while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3],
                 &arr[4], &arr[5], &arr[6]) == 7)
    {
        int i = 0;
        int max = 0;
        int min = 100;
        int sum = 0;
        for(i=0; i<7; i++)
        {
            if(arr[i]>max)
                max = arr[i];
            if(arr[i]<min)
                min = arr[i];

            sum += arr[i];
        }
        printf("%.2lf\n", (sum-max-min)/5.0);

    }
        return 0;
}*/
//
//int main() {
//    int num = 0;
//    int max = 0;
//    int min = 100;
//    int sum = 0;
//    int n = 0;
//    while (scanf("%d", &num) == 1) {
//        if (num > max)
//            max = num;
//        if (num < min)
//            min = num;
//        sum += num;
//        n++;
//        if (n == 7)
//        {
//            printf("%.2lf\n", (sum - max - min) / 5.0);
//            max = 0;
//            min = 100;
//            sum = 0;
//            n = 0;
//        }
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int Status = 0;
//    while (scanf("%d", &Status) == 1) { // 注意 while 处理多个 case
//        switch (Status) {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//


//书：书名+作者+定价+书号
//《鹏哥C语言》
//struct Book
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//}sb3, sb4;
////sb3, sb4 也是struct Book类型的结构体变量
////是全局变量
//
//struct Stu
//{
//    char name[20];
//    int age;
//    char id[12];
//};
//
//
//int main()
//{
//    struct Book sb1;//局部变量
//    struct Book sb2;//局部变量
//    struct Stu ss1;
//    struct Stu ss2;
//
//    return 0;
//}
//

//struct
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//}sb1, sb2;//匿名结构体类型
//
//
//int main()
//{
//    return 0;
//}

//
//struct
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//}sb1;
//
//struct
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//}* ps;
//
//int main()
//{
//    ps = &sb1;
//
//    return 0;
//}
//
#include <string.h>
//
//int main()
//{
//    char arr[10];
//    printf("%s\n", strcpy(arr, "hello bit"));
//
//    return 0;
//}
//



//struct Node
//{
//    int data;
//    struct Node n;
//};

//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;

//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;
//
//
//int main()
//{
//    Node n;
//
//    return 0;
//}
//
//
//struct Stu
//{
//    char name[20];
//    int age;
//    char id[12];
//};
//
//struct Book
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//    struct Stu s;
//}sb3 = { "鹏哥C语言", "鹏哥", 88, "PG10001", {"lisi", 30, "20220101"}}, sb4;
//
//struct Book sb5;
//
////sb3, sb4 也是struct Book类型的结构体变量
////是全局变量
//
//
//
//int main()
//{
//    //struct Book sb1 = {"《杭哥C++》", "杭哥", 88, "HG10001"};//局部变量
//    //struct Book sb2;//局部变量
//
//    printf("%s %s %d %s %s %d %s\n", sb3.book_name, sb3.author, sb3.price, sb3.id, sb3.s.name, sb3.s.age, sb3.s.id);
//
//    //struct Stu ss1;
//    //struct Stu ss2;
//
//    return 0;
//}
//


//
//struct S
//{
//    char c;
//    int a;
//    float f;
//};
//
//int main()
//{
//    struct S s = {'w', 10, 3.14f};
//    printf("%c %d %f\n", s.c, s.a, s.f);
//
//    struct S s2 = {.f = 3.14f, .c = 'w', .a = 10};
//    printf("%c %d %f\n", s2.c, s2.a, s2.f);
//
//    return 0;
//}
//
//
//
//struct S1 
//{
//    char c1;
//    int i;
//    char c2;
//};
//
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//};
//#include <stddef.h>
//
//int main()
//{
//    printf("%d\n", offsetof(struct S2, c1));
//    printf("%d\n", offsetof(struct S2, c2));
//    printf("%d\n", offsetof(struct S2, i));
//
//    //struct S1 s1;
//  /*  printf("%d\n", offsetof(struct S1, c1));
//    printf("%d\n", offsetof(struct S1, i));
//    printf("%d\n", offsetof(struct S1, c2));*/
//
//    //printf("%d\n", sizeof(struct S1));
// //   printf("%d\n", sizeof(struct S2));
//
//    return 0;
//}
//
//struct S3
//{
//    double d;
//    char c;
//    int i;
//};
//
//struct S4
//{
//    char c1;
//    struct S3 s3;
//    double d;
//};
//
//int main()
//{
//    printf("%d\n", sizeof(struct S4));
//
//    return 0;
//}

//struct S1 
//{
//    char c1;
//    int i;
//    char c2;
//};//12
//
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//};//8



//设置默认对齐数
//#pragma pack(1)
//
//struct S1 
//{
//    char c1;
//    int i;
//    char c2;
//};//
//
////恢复默认对齐数
//#pragma pack()
//
//int main()
//{
//    printf("%d\n", sizeof(struct S1));
//
//    return 0;
//}

//
//struct S
//{
//    int data[1000];
//    int num;
//};
//
//void print1(struct S s)
//{
//    printf("%d %d %d %d\n", s.data[0], s.data[1], s.data[2], s.num);
//}
//
//void print2(const struct S* ps)
//{
//    //printf("%d %d %d %d\n", (*ps).data[0], (*ps).data[1], (*ps).data[2], (*ps).num);
//    printf("%d %d %d %d\n", ps->data[0], ps->data[1], ps->data[2], ps->num);
//}
//
//int main()
//{
//    struct S ss = { {1,2,3,4,5}, 100 };
//    print1(ss);
//    print2(&ss);
//
//    return 0;
//}
//