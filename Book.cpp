#include"Book.h"

bool Book::isSameAuthor(string author)
{
	return this->author == author;
}

void Book::showInfo()
{
	cout << " " << author;
	cout << " " << title;
	cout << " " << year << "\n";
}

void Book::setYear(int year) 
{
	if (year > 0 && year < 2023) {
		this->year = year;
	}
	else {
		cout << "Вы ввели неправильный год. По умолчанию установится 2023\n";
		this->year = 2023;
	}
}

void Book::setAuthor(string author) {
	this->author = author;
}

void Book::setTitle(string title) {
	this->title = title;
}