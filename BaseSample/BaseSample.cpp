// BaseSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 范围确定符的示例
int pages = 800;		// 全局变量
void printPages()
{
	int pages = 100;    // 本地变量
	cout << "全局变量pages=" << ::pages;	// 打印全局变量
	cout << '\n';
	cout << "本地变量pages=" << pages;      // 打印本地变量
	cout << '\n';
}

// 前增1运算符的示例
void printBeforeIncrement()
{
	cout << "前增1运算符" << endl;
	int a = 1, b = 2, result;
	result = (a)+(++b);   // result现在的取值为4
	cout << result << "\n";
}

int main()
{
	printPages();
	printBeforeIncrement();

	return 0;
}

