#pragma once
#include<iostream> 
#include <vector>
#include "Book.h"
using namespace std;

class Library {
	vector <Book> books;
public:
	void addBook(Book book);
	void deleteBook(int bookNumber);
	void showBooks(string author);
	void showAllBooks();
};