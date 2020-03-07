#include "stdafx.h"
#include "BookInformationAndBookSubject.h"
#include <string>
#include <iostream>
#include "Library.h"

using namespace std;
BookInformationAndBookSubject::BookInformationAndBookSubject()
{
}


BookInformationAndBookSubject::~BookInformationAndBookSubject()
{
}
string BookInformationAndBookSubject::toFileString()//this function put all information in one string and return it
{
	string allInfo;
	allInfo += bookName + " ";
	allInfo += writerName + " ";
	allInfo += releasedate + " ";
	allInfo += subject + " ";
	return allInfo;
};
void BookInformationAndBookSubject::toDisplayString(){// this show book information
	string allInfo;
	allInfo += "book name : " + bookName + "\n";
	allInfo += "book name : " + bookName + "\n";
	allInfo += "book name : " + bookName + "\n";
	allInfo += "book name : " + bookName + "\n";
	cout << allInfo << endl;
}