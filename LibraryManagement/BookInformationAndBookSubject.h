#pragma once
#include <string>
#include "Library.h"

using namespace std;
class BookInformationAndBookSubject
{
private:
	string bookName;
	string writerName;
	string releasedate;
	string subject;
	string subject1 = "Elmi";
	string subject2 = "Falsafi";
	string subject3 = "Sher";
	string subject4 = "Dastan";
public:
	BookInformationAndBookSubject();
	~BookInformationAndBookSubject();
	void toDisplayString();
	string toFileString();
};

