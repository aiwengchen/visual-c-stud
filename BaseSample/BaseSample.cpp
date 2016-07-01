// BaseSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// 范围确定符的示例
int pages = 800;		// 全局变量
void printPages()
{
	int pages = 100;    // 本地变量
	cout << "全局变量pages=" << ::pages << endl;	// 打印全局变量 ::pages
	cout << "本地变量pages=" << pages << endl;      // 打印本地变量
}

// 前增1运算符的示例
void printBeforeIncrement()
{
	cout << "前增1运算符" << endl;
	int a = 1, b = 2, result = 0; //初始化变量
	result = (a)+(++b);   // result现在的取值为4
	cout << result << endl;
}


// 后增1运算符的示例
void printBeforeDecrement()
{
	int a = 1, b = 2, result;
	result = (a)+(b++);   // result现在的取值为3
	cout << result << endl;
}

// 逻辑与运算符的示例
void printLogicalAnd()
{
	int nCount = 5, nPrice = 2;

	if ((nCount > 0) && (nPrice > 0))
	{	// 判断货物总价
		cout << "货物总价" << nCount*nPrice << "元" << endl;
	}
	else
	{
		cout << "数据无效" << endl;
	}
}

// 逻辑或运算符的示例
void printLogicalOr()
{
	int age = 1000;

	if ((age > 120) || (age < 0))
	{
		cout << "年龄值无效" << endl;
	}
	else
	{
		cout << "年龄值有效" << endl;
	}
}

// 逻辑非运算符的示例
void printLogicalNot()
{
	int balance = 5;

	if (!balance)
	{
		cout << "账户余额为0元" << "\n";
	}
	else
	{
		cout << "账户余额不为0元" << "\n";
	}
}


// 地址操作符的示例
void printAddressOf()
{
	int *pPtr;
	int nArray[5];
	pPtr = &nArray[2];
	cout << pPtr << "\n";
	cout << &nArray << "\n";
}

// 间接操作符的示例
void printIndirection()
{
	int nTest;
	int *pTest;					// 定义指针
	pTest = &nTest;				// 为指针变量分配值为nTest的地址
	*pTest = 15;
	cout << nTest << "\n";
}


// 逗号操作符的示例
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


// sizeof的示例
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


//new和delete操作符示例
class MyClass {
public:
	MyClass(int)
	{
		throw "错误!";
	}
};

void newTest(void)
{
	try
	{

		// p1指向的堆栈内存会被delete释放
		MyClass* p1 = new MyClass(99);
	}
	catch (...)
	{
	}


	//try
	//{
	//	// 此调用，因为使用了带定位符的构造函数，
	//	// 因此，会产生内存泄露。
	//	//        MyClass* p2 = new(__FILE__, __LINE__) MyClass(99);
	//}
	//catch (...)
	//{
	//}
}

// 关系运算符示例
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

// 赋值运算符示例
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

// 位运算符示例
void printBitOperator()
{
	int a = 3, b = 5, result;		// 0000 0011, 0000 0101

									// 位与运算符	
	result = a & b;				// 0000 0001=1
	cout << "(a & b)=" << result << "\n";

	// 位或运算符
	result = a | b;				// 0000 0111=7
	cout << "(a | b)=" << result << "\n";

	// 异或运算符
	result = a ^ b;				// 0000 0101=6
	cout << "(a ^ b)=" << result << "\n";

	// 左移运算符
	result = a << 2;				// 0000 1100 = 12
	cout << "(a << 2)=" << result << "\n";

	// 右移运算符
	result = a >> 3;				// 0000 0000 = 0
	cout << "(a >> 3)=" << result << "\n";

	// 补码运算符
	unsigned short c = 0xBBBB;		// 1011 1011 1011 1011
	c = ~c;					// 0100 0100 0100 0100
	cout << "(~c)=" << c << "\n";
}

// 条件运算符
void printConditional()
{
	int nBalance = 20, nAssign = 1, result;
	result = (nBalance <= 0) ? 0 : nAssign;
	cout << "result=" << result << "\n";
}

// 引用类型示例
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

// 数据类型转换示例
void printTypeCast()
{
	double x = 57.98;
	cout << "x=" << x << "\n";

	int y = (int)x;
	cout << "y=" << y << "\n";
}

// 成员选择操作符示例
struct MyDate {
	int  nYear;
	int  nMonth;
	int	nDay;
};

void printMemberSelect()
{
	MyDate tmpDates;
	tmpDates.nYear = 2008;

	cout << "年=" << (&tmpDates)->nYear << "\n";
}

// 类成员指针操作符
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
	cout << "初始年=" << pDate->nYear << "\n";

	(pDate->SetYear)(2008);
	cout << "修改年=" << pDate->nYear << "\n";
	delete pDate;
	pDate = NULL;
}

// 算术运算符示例
void printMath()
{
	int a = 7, b = 8;
	cout << "a+b=" << (a + b) << "\n";
	cout << "a-b=" << (a - b) << "\n";
	cout << "a*b=" << (a * b) << "\n";
	cout << "a/b=" << (a / b) << "\n";
	cout << "a%b=" << (a % b) << "\n";
}

// 日期时间结构体
struct MyDateTime
{
	int year;		// 年
	int month;		// 月
	int day;		// 日
	int hour;		// 时
	int minute;		// 分
	int second;		// 秒
};

// 递归函数的调用,功能是计算指定整数的阶乘
long factorial(int number)
{
	if (number < 0)
	{	// 如果传入的参数小于0，则无法计算阶乘，返回。
		return -1;
	}
	if ((number == 0) || (number == 1))
	{	// 如果传入的参数等于0或等于1，则其阶乘为1。
		return 1;
	}
	else
	{	// 否则，递归调用，知道计算完成。
		return (number * factorial(number - 1));
	}
}

// 使用递归函数的示例
void printRecuFunction()
{
	int a;
	cout << "递归示例，输入要计算阶乘的数：";
	cin >> a;
	cout << a << "的阶乘=" << factorial(a) << "\n";
}

// 成员访问符示例
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

// 学生结构
struct student
{
	string name;				// 存放学生名称的字符串
	int age;					// 存放学生年龄
};

// 输出学生信息
void printStudent(student* stu)
{	
	cout << "姓名=" << stu->name << ";年龄=" << stu->age << ".";
}

// 测试指针传递
void TestPassPoint()
{
	student* stu = new student();
	stu->name = "张三";	
	stu->age = 10;
	printStudent(stu);
	delete stu;
	stu = NULL;
}


int main()
{
	cout << "--范围确定符的示例" << endl;
	printPages();// 范围确定符的示例
	cout << "--前增1运算符的示例" << endl;
	printBeforeIncrement();// 前增1运算符的示例
	cout << "--后增1运算符的示例" << endl;
	printBeforeDecrement();// 后增1运算符的示例
	cout << "--逻辑与运算符的示例" << endl;
	printLogicalAnd();// 逻辑与运算符的示例					 
	cout << "--逻辑或运算符的示例" << endl;
	printLogicalOr(); // 逻辑或运算符的示例					  
	cout << "--逻辑非运算符的示例	" << endl;
	printLogicalNot();// 逻辑非运算符的示例					  
	cout << "--地址操作符的示例" << endl;
	printAddressOf();// 地址操作符的示例					 
	cout << "--间接操作符的示例" << endl;
	printIndirection();// 间接操作符的示例					   
	cout << "--逗号操作符的示例" << endl;
	TestFunction(2, 3, 4);// 逗号操作符的示例
	cout << "--逗号操作符的示例" << endl;
	printComma();// 逗号操作符的示例
	cout << "--sizeof的示例" << endl;
	printSizeof();// sizeof的示例
	cout << "--new delete	" << endl;
	newTest();// new delete	
	cout << "--关系运算符示例	" << endl;
	printRelation();// 关系运算符示例					
	cout << "--赋值运算符示例" << endl;
	printAssignment();// 赋值运算符示例					  
	cout << "--位运算符示例" << endl;
	printBitOperator();// 位运算符示例					   
	cout << "--条件运算符" << endl;
	printConditional();// 条件运算符
	cout << "引用类型示例" << endl;
	printRefrence();// 引用类型示例
	cout << "--数据类型转换示例	" << endl;
	printTypeCast();// 数据类型转换示例	
	cout << "--成员选择操作符示例" << endl;
	printMemberSelect();// 成员选择操作符示例						
	cout << "--类成员指针操作符" << endl;
	printMemberPoint();// 类成员指针操作符					   
	cout << "--算术运算符示例	" << endl;
	printMath();// 算术运算符示例				
	cout << "--使用递归函数的示例" << endl;
	printRecuFunction();// 使用递归函数的示例						
	cout << "--成员访问符示例" << endl;
	printClassAccess();// 成员访问符示例					   
	cout << "--测试指针传递" << endl;
	TestPassPoint();// 测试指针传递



	return 0;
}

