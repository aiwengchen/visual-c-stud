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

int main()
{
	printPages();
	
	return 0;
}

