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

int main()
{
	printPages();
	
	return 0;
}

