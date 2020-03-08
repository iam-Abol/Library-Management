#include "stdafx.h"
#include "Library.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
Library::Library()
{
}


Library::~Library()
{
}
string Library::getName(){
	return LibraryName;
};
void Library::removeBook(string name){
	ifstream input(bookFile);
	string allThing;
	string bookNameFromFile;
	string info;
	bool flag = false;
	string allInfo;
	while (input){
		input >> bookNameFromFile;
		getline(input, info);
		if (bookNameFromFile + info != allInfo){
			if (bookNameFromFile == name){
				flag = true;
				allInfo = bookNameFromFile + info;
				info = allInfo;
				bookNameFromFile = "";
			}
			else{
				allInfo = bookNameFromFile + info;
				allThing += allInfo + "\n";
				info = allInfo;
				bookNameFromFile = "";
			}
		}

	}
	input.close();
	fstream output(bookFile,ios::out);
	output << allThing << "\n";
	if (flag == true){
		cout << "book removed" << endl;
	}
	else{
		cout << "book not found"<<endl;
	}

}
void Library::displayBooks(){
	fstream input(bookFile);
	string info;
	while (input){
		getline(input, info);
		cout << "book information : " << info << endl;
	}

};