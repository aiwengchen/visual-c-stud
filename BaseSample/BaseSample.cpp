// BaseSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// ��Χȷ������ʾ��
int pages = 800;		// ȫ�ֱ���
void printPages()
{
	int pages = 100;    // ���ر���
	cout << "ȫ�ֱ���pages=" << ::pages << endl;	// ��ӡȫ�ֱ��� ::pages
	cout << "���ر���pages=" << pages << endl;      // ��ӡ���ر���
}

// ǰ��1�������ʾ��
void printBeforeIncrement()
{
	cout << "ǰ��1�����" << endl;
	int a = 1, b = 2, result = 0; //��ʼ������
	result = (a)+(++b);   // result���ڵ�ȡֵΪ4
	cout << result << endl;
}


// ����1�������ʾ��
void printBeforeDecrement()
{
	int a = 1, b = 2, result;
	result = (a)+(b++);   // result���ڵ�ȡֵΪ3
	cout << result << endl;
}

// �߼����������ʾ��
void printLogicalAnd()
{
	int nCount = 5, nPrice = 2;

	if ((nCount > 0) && (nPrice > 0))
	{	// �жϻ����ܼ�
		cout << "�����ܼ�" << nCount*nPrice << "Ԫ" << endl;
	}
	else
	{
		cout << "������Ч" << endl;
	}
}

// �߼����������ʾ��
void printLogicalOr()
{
	int age = 1000;

	if ((age > 120) || (age < 0))
	{
		cout << "����ֵ��Ч" << endl;
	}
	else
	{
		cout << "����ֵ��Ч" << endl;
	}
}

// �߼����������ʾ��
void printLogicalNot()
{
	int balance = 5;

	if (!balance)
	{
		cout << "�˻����Ϊ0Ԫ" << "\n";
	}
	else
	{
		cout << "�˻���Ϊ0Ԫ" << "\n";
	}
}


// ��ַ��������ʾ��
void printAddressOf()
{
	int *pPtr;
	int nArray[5];
	pPtr = &nArray[2];
	cout << pPtr << "\n";
	cout << &nArray << "\n";
}

// ��Ӳ�������ʾ��
void printIndirection()
{
	int nTest;
	int *pTest;					// ����ָ��
	pTest = &nTest;				// Ϊָ���������ֵΪnTest�ĵ�ַ
	*pTest = 15;
	cout << nTest << "\n";
}


// ���Ų�������ʾ��
void TestFunction(int x, int y, int z)
{
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
	cout << "z=" << z << "\n";
}

void printComma()
{
	int a = 50;
	int b = 0;
	int c = 99;
	TestFunction(a, (b = 47, b - 7), c);
}


// sizeof��ʾ��
struct align_struct {
	char ch;
	int i;
};

void printSizeof()
{
	cout << "sizeof(int)=" << sizeof(int) << "\n";
	cout << "sizeof(align_struct)=" << sizeof(align_struct) << "\n";

	int  array[] = { 11, 22, 33, 44 };
	cout << "sizeof( array )=" << sizeof(array) << "\n";
	cout << "sizeof( array[0] )=" << sizeof(array[0]) << "\n";
	cout << "count=" << sizeof(array) / sizeof(array[0]) << "\n";
}


//new��delete������ʾ��
class MyClass {
public:
	MyClass(int)
	{
		throw "����!";
	}
};

void newTest(void)
{
	try
	{

		// p1ָ��Ķ�ջ�ڴ�ᱻdelete�ͷ�
		MyClass* p1 = new MyClass(99);
	}
	catch (...)
	{
	}


	//try
	//{
	//	// �˵��ã���Ϊʹ���˴���λ���Ĺ��캯����
	//	// ��ˣ�������ڴ�й¶��
	//	//        MyClass* p2 = new(__FILE__, __LINE__) MyClass(99);
	//}
	//catch (...)
	//{
	//}
}

// ��ϵ�����ʾ��
void printRelation()
{
	int a = 1, b = 2, c = 2, d = 4, e = 5;
	cout << "(a<b)=" << (a<b) << "\n";
	cout << "(c<=b)=" << (c <= b) << "\n";
	cout << "(d>e)=" << (d>e) << "\n";
	cout << "(e>=d)=" << (e >= d) << "\n";
	cout << "(b==c)=" << (b == c) << "\n";
	cout << "(b!=c)=" << (b != c) << "\n";
}

// ��ֵ�����ʾ��
void printAssignment()
{
	int a = 2, b = 3, c = 6, d = 9, e, f = 4;
	cout << "(e=d) e=" << (e = d, e) << "\n";
	cout << "(a*=b) a=" << (a *= b, a) << "\n";
	cout << "(c/=b) c=" << (c /= b, c) << "\n";
	cout << "(a%=f) a=" << (a %= f, a) << "\n";
	cout << "(c+=d) c=" << (c += d, c) << "\n";
	cout << "(c-=d) c=" << (c -= d, c) << "\n";
	cout << "(c<<=b) c=" << (c <<= b, c) << "\n";
	cout << "(c>>=b) c=" << (c >>= b, c) << "\n";
	cout << "(b&=d) b=" << (b &= d, b) << "\n";
	cout << "(c|=d) c=" << (c |= d, c) << "\n";
	cout << "(b^=c) b=" << (b ^= c, b) << "\n";
}

// λ�����ʾ��
void printBitOperator()
{
	int a = 3, b = 5, result;		// 0000 0011, 0000 0101

									// λ�������	
	result = a & b;				// 0000 0001=1
	cout << "(a & b)=" << result << "\n";

	// λ�������
	result = a | b;				// 0000 0111=7
	cout << "(a | b)=" << result << "\n";

	// ��������
	result = a ^ b;				// 0000 0101=6
	cout << "(a ^ b)=" << result << "\n";

	// ���������
	result = a << 2;				// 0000 1100 = 12
	cout << "(a << 2)=" << result << "\n";

	// ���������
	result = a >> 3;				// 0000 0000 = 0
	cout << "(a >> 3)=" << result << "\n";

	// ���������
	unsigned short c = 0xBBBB;		// 1011 1011 1011 1011
	c = ~c;					// 0100 0100 0100 0100
	cout << "(~c)=" << c << "\n";
}

// ���������
void printConditional()
{
	int nBalance = 20, nAssign = 1, result;
	result = (nBalance <= 0) ? 0 : nAssign;
	cout << "result=" << result << "\n";
}

// ��������ʾ��
void AddOne(int& a)
{
	a++;
}

void printRefrence()
{
	int x = 99;
	cout << "x=" << x << "\n";

	AddOne(x);
	cout << "AddOne(x) x=" << x << "\n";
}

// ��������ת��ʾ��
void printTypeCast()
{
	double x = 57.98;
	cout << "x=" << x << "\n";

	int y = (int)x;
	cout << "y=" << y << "\n";
}

// ��Աѡ�������ʾ��
struct MyDate {
	int  nYear;
	int  nMonth;
	int	nDay;
};

void printMemberSelect()
{
	MyDate tmpDates;
	tmpDates.nYear = 2008;

	cout << "��=" << (&tmpDates)->nYear << "\n";
}

// ���Աָ�������
class CMyDate
{
public:
	int nYear;
	int nMonth;
	int	nDay;

public:
	void SetYear(int year) { nYear = year; };
};

void printMemberPoint()
{
	CMyDate* pDate = new CMyDate();
	pDate->SetYear(2007);
	cout << "��ʼ��=" << pDate->nYear << "\n";

	(pDate->SetYear)(2008);
	cout << "�޸���=" << pDate->nYear << "\n";
	delete pDate;
	pDate = NULL;
}

// ���������ʾ��
void printMath()
{
	int a = 7, b = 8;
	cout << "a+b=" << (a + b) << "\n";
	cout << "a-b=" << (a - b) << "\n";
	cout << "a*b=" << (a * b) << "\n";
	cout << "a/b=" << (a / b) << "\n";
	cout << "a%b=" << (a % b) << "\n";
}

// ����ʱ��ṹ��
struct MyDateTime
{
	int year;		// ��
	int month;		// ��
	int day;		// ��
	int hour;		// ʱ
	int minute;		// ��
	int second;		// ��
};

// �ݹ麯���ĵ���,�����Ǽ���ָ�������Ľ׳�
long factorial(int number)
{
	if (number < 0)
	{	// �������Ĳ���С��0�����޷�����׳ˣ����ء�
		return -1;
	}
	if ((number == 0) || (number == 1))
	{	// �������Ĳ�������0�����1������׳�Ϊ1��
		return 1;
	}
	else
	{	// ���򣬵ݹ���ã�֪��������ɡ�
		return (number * factorial(number - 1));
	}
}

// ʹ�õݹ麯����ʾ��
void printRecuFunction()
{
	int a;
	cout << "�ݹ�ʾ��������Ҫ����׳˵�����";
	cin >> a;
	cout << a << "�Ľ׳�=" << factorial(a) << "\n";
}

// ��Ա���ʷ�ʾ��
void printClassAccess()
{
	CMyDate myDate1;
	myDate1.nDay = 17;
	CMyDate* myDate2 = new CMyDate();
	myDate2->nDay = 18;
	cout << "myDate1.nDay=" << myDate1.nDay << ";myDate2->nDay=" << myDate2->nDay << "." << endl;
	delete myDate2;
	myDate2 = NULL;
}

// ѧ���ṹ
struct student
{
	string name;				// ���ѧ�����Ƶ��ַ���
	int age;					// ���ѧ������
};

// ���ѧ����Ϣ
void printStudent(student* stu)
{	
	cout << "����=" << stu->name << ";����=" << stu->age << ".";
}

// ����ָ�봫��
void TestPassPoint()
{
	student* stu = new student();
	stu->name = "����";	
	stu->age = 10;
	printStudent(stu);
	delete stu;
	stu = NULL;
}


int main()
{
	cout << "--��Χȷ������ʾ��" << endl;
	printPages();// ��Χȷ������ʾ��
	cout << "--ǰ��1�������ʾ��" << endl;
	printBeforeIncrement();// ǰ��1�������ʾ��
	cout << "--����1�������ʾ��" << endl;
	printBeforeDecrement();// ����1�������ʾ��
	cout << "--�߼����������ʾ��" << endl;
	printLogicalAnd();// �߼����������ʾ��					 
	cout << "--�߼����������ʾ��" << endl;
	printLogicalOr(); // �߼����������ʾ��					  
	cout << "--�߼����������ʾ��	" << endl;
	printLogicalNot();// �߼����������ʾ��					  
	cout << "--��ַ��������ʾ��" << endl;
	printAddressOf();// ��ַ��������ʾ��					 
	cout << "--��Ӳ�������ʾ��" << endl;
	printIndirection();// ��Ӳ�������ʾ��					   
	cout << "--���Ų�������ʾ��" << endl;
	TestFunction(2, 3, 4);// ���Ų�������ʾ��
	cout << "--���Ų�������ʾ��" << endl;
	printComma();// ���Ų�������ʾ��
	cout << "--sizeof��ʾ��" << endl;
	printSizeof();// sizeof��ʾ��
	cout << "--new delete	" << endl;
	newTest();// new delete	
	cout << "--��ϵ�����ʾ��	" << endl;
	printRelation();// ��ϵ�����ʾ��					
	cout << "--��ֵ�����ʾ��" << endl;
	printAssignment();// ��ֵ�����ʾ��					  
	cout << "--λ�����ʾ��" << endl;
	printBitOperator();// λ�����ʾ��					   
	cout << "--���������" << endl;
	printConditional();// ���������
	cout << "��������ʾ��" << endl;
	printRefrence();// ��������ʾ��
	cout << "--��������ת��ʾ��	" << endl;
	printTypeCast();// ��������ת��ʾ��	
	cout << "--��Աѡ�������ʾ��" << endl;
	printMemberSelect();// ��Աѡ�������ʾ��						
	cout << "--���Աָ�������" << endl;
	printMemberPoint();// ���Աָ�������					   
	cout << "--���������ʾ��	" << endl;
	printMath();// ���������ʾ��				
	cout << "--ʹ�õݹ麯����ʾ��" << endl;
	printRecuFunction();// ʹ�õݹ麯����ʾ��						
	cout << "--��Ա���ʷ�ʾ��" << endl;
	printClassAccess();// ��Ա���ʷ�ʾ��					   
	cout << "--����ָ�봫��" << endl;
	TestPassPoint();// ����ָ�봫��



	return 0;
}

