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
void Library::removeBook(string name){
	ifstream input(bookFile);
	string allThing;
	string bookNameFromFile;
	string info;
	bool flag = false;
	while (input){
		input >> bookNameFromFile;
		getline(input, info);
		if (bookNameFromFile != name){
			allThing += bookNameFromFile + info+"\n";
		}
		else{
			flag = true;
		}
	}
	input.close();
	fstream output(bookFile);
	output << allThing << "\n";
	if (flag == true){
		cout << "book removed" << endl;
	}
	else{
		cout << "book not found";
	}
	
}