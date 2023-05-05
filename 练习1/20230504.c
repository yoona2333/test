/*#include <stdio.h>
int main()
{
	printf("hahha\n");
	return 0;
}*/
/*
	char 字符类型
	int 整型
	short 短整型
	long 长整型
	long long 更长的整型
	float 单精度浮点型
	double 双精度浮点型

*/
/*
#include <stdio.h>
int main()
{
	printf("yoona\n");
	printf("%d\n",100);//打印一个整数
	//sizeof 关键字 操作符 计算类型或变量所占空间的大小     单位是字节      一字节八比特
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(float));//4
	return 0;
}
*/
//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 1;
//	printf("%d\n",age);
//	printf("%lf\n", weight);
//	return 0;
//}

//#include<stdio.h>
//int a = 100;//全局变量 {}外部定义的
//int main()
//{
//	int a = 10;//局部变量 {}内部定义的
//	//当局部变量和全局变量名字冲突时，局部变量优先
//	printf("%d\n", a);
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf_s("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//
//	return 0;
//}


//#include<stdio.h>
////int b = 2023;
//extern int b;//声明一下变量
//int main()
//{
//	{
//		int a = 10; //变量a只能在这个括号里面存活
//		printf("%d\n", a);		//作用域和生命周期
//	}
////	printf("%d\n", b);
//	return 0;
//}

//局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期：整个程序的生命周期。
//C语言中的常量分为以下几种：
//1；字面常量  1  2  3  d
//2；const修饰的常变量
//3；#define定义的标识符常量
//3;枚举常量  可以一一列举的常量
//#include<stdio.h>
//#define max 13
//enum sex //枚举常量不能改，只能从123算起，如果赋初值的话，从初值算起，如开头为3，则之后为456
//{
//	male=6,//赋初值
//	female,
//	secret
//};
//int main()
//{
//	//int a = max;
//	//a++;
//	////const int a = 10; //常变量，具有常属性，不能被改变的属性，本质上还是个变量。
//	//printf("%d\n", a);
//	enum sex s = male;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret
//	);
//	return 0;
//}


//字符串就是一串字符，由双引号引起来的一串字符为字符串字面值
//字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不作为字符串内容。
//字符串在结尾的位置隐藏了一个\0的字符，它是字符串结束的标志
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";//hello\0   字符串本身自带了\0  但在计算字符串长度时不算在内
//	char arr2[] = "abc";  //abc\0
//	char arr3[] = { 'a','b','c' };//abc  会出现乱码，没有结束标志\0
//	char arr4[] = { 'a','b','c' ,'\0'};
//	int len = strlen("abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	printf("%d\n", len); // 字符串本身自带了\0 但在计算字符串长度时不算在内
//	printf("%d\n", strlen(arr2));//3
//	printf("%d\n", strlen(arr3));//随机值
//	printf("%d\n", strlen(arr4));//3
//	return 0;
//}


#include<stdio.h>
int main()
{


	return 0;
}
