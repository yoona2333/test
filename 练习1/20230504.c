/*#include <stdio.h>
int main()
{
	printf("hahha\n");
	return 0;
}*/
/*
	char �ַ�����
	int ����
	short ������
	long ������
	long long ����������
	float �����ȸ�����
	double ˫���ȸ�����

*/
/*
#include <stdio.h>
int main()
{
	printf("yoona\n");
	printf("%d\n",100);//��ӡһ������
	//sizeof �ؼ��� ������ �������ͻ������ռ�ռ�Ĵ�С     ��λ���ֽ�      һ�ֽڰ˱���
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
//int a = 100;//ȫ�ֱ��� {}�ⲿ�����
//int main()
//{
//	int a = 10;//�ֲ����� {}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ���������
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
//extern int b;//����һ�±���
//int main()
//{
//	{
//		int a = 10; //����aֻ�����������������
//		printf("%d\n", a);		//���������������
//	}
////	printf("%d\n", b);
//	return 0;
//}

//�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�ֱ������������ڣ�����������������ڡ�
//C�����еĳ�����Ϊ���¼��֣�
//1�����泣��  1  2  3  d
//2��const���εĳ�����
//3��#define����ı�ʶ������
//3;ö�ٳ���  ����һһ�оٵĳ���
//#include<stdio.h>
//#define max 13
//enum sex //ö�ٳ������ܸģ�ֻ�ܴ�123�����������ֵ�Ļ����ӳ�ֵ�����翪ͷΪ3����֮��Ϊ456
//{
//	male=6,//����ֵ
//	female,
//	secret
//};
//int main()
//{
//	//int a = max;
//	//a++;
//	////const int a = 10; //�����������г����ԣ����ܱ��ı�����ԣ������ϻ��Ǹ�������
//	//printf("%d\n", a);
//	enum sex s = male;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret
//	);
//	return 0;
//}


//�ַ�������һ���ַ�����˫������������һ���ַ�Ϊ�ַ�������ֵ
//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־������Ϊ�ַ������ݡ�
//�ַ����ڽ�β��λ��������һ��\0���ַ��������ַ��������ı�־
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";//hello\0   �ַ��������Դ���\0  ���ڼ����ַ�������ʱ��������
//	char arr2[] = "abc";  //abc\0
//	char arr3[] = { 'a','b','c' };//abc  ��������룬û�н�����־\0
//	char arr4[] = { 'a','b','c' ,'\0'};
//	int len = strlen("abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	printf("%d\n", len); // �ַ��������Դ���\0 ���ڼ����ַ�������ʱ��������
//	printf("%d\n", strlen(arr2));//3
//	printf("%d\n", strlen(arr3));//���ֵ
//	printf("%d\n", strlen(arr4));//3
//	return 0;
//}


#include<stdio.h>
int main()
{


	return 0;
}
