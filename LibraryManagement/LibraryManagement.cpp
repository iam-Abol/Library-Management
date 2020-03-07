#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
struct test{
	float x;
	char a;
};
int _tmain(int argc, _TCHAR* argv[])
{
	vector <test> testing;
	test a;
	a.x = 1.5;
	a.a = 'l';
	testing.push_back(a);
	cout << testing[0].a << endl;

	system("pause");
	return 0;
}

