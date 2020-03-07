#pragma once
#include <string>
#include <vector>
using namespace std;
struct book{
	string bookName;
	string writerName;
	string releasedate;
	string subject;
	string toFileString()//this function put all information in one string and return it
	{
	};
	void toDisplayString(){// this show book information

	}
};
struct bookSubject{
	const string subject1 ="Elmi";
	const string subject2 ="Falsafi";
	const string subject3 = "Sher";
	const string subject4 = "Dastan";
};
class Library
{
private:
	
	string LibraryName;
	vector <book> booksInformation;
public:
	Library();
	~Library();
};
 
