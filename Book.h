#pragma once
#include<iostream> 
using namespace std;

class Book {
	int year;
	string title;
	string author;
public:
	Book() {//конструктор без параметров
		title = "";
		author = "";
		year = 0;
	}

	void showInfo();
	bool isSameAuthor(string author);
	void setYear(int year);
	void setAuthor(string author);
	void setTitle(string title);

};