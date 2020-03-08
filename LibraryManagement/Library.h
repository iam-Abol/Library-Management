#pragma once
#include <string>
#include <vector>
#include "BookInformationAndBookSubject.h"
#include <iostream>
using namespace std;

class Library
{
private:
	const string bookFile = "books.txt";
	string LibraryName;
	vector <class BookInformationAndBookSubject> booksInformation;
public:
	Library();
	~Library();
	void removeBook(string name);

	string getName();
	void displayBooks();
	void addBook();
};
 
