// BaseSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// ��Χȷ������ʾ��
int pages = 800;		// ȫ�ֱ���
void printPages()
{
	int pages = 100;    // ���ر���
	cout << "ȫ�ֱ���pages=" << ::pages;	// ��ӡȫ�ֱ���
	cout << '\n';
	cout << "���ر���pages=" << pages;      // ��ӡ���ر���
	cout << '\n';
}

// ǰ��1�������ʾ��
void printBeforeIncrement()
{
	cout << "ǰ��1�����" << endl;
	int a = 1, b = 2, result;
	result = (a)+(++b);   // result���ڵ�ȡֵΪ4
	cout << result << "\n";
}

int main()
{
	printPages();
	printBeforeIncrement();

	return 0;
}

