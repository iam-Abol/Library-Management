#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Library.h"
#include "BookInformationAndBookSubject.h"
using namespace std;
struct test{
	float x;
	char a;
};
int _tmain(int argc, _TCHAR* argv[])
{
	Library obj;
	obj.removeBook("BIBI");

	system("pause");
	return 0;
}

