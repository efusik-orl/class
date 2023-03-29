#include"Library.h"

void Library::addBook(Book book)
{
	books.push_back(book);
}

void Library::deleteBook(int bookNumber)
{
	int validNumber = bookNumber - 1;
	if (validNumber < books.size() && validNumber >= 0) {
		books.erase(books.begin() + validNumber);
	}
	else {
		cout << "Такого номера нет\n";
	}
}

void Library::showBooks(string author)
{

	for (int i = 0; i < books.size(); i++) {
		Book book = books.at(i);
		if (book.isSameAuthor(author)) {
			cout << "\n" << i + 1 << ")";
			book.showInfo();
		}
		
	}
}

void Library::showAllBooks()
{
	for (int i = 0; i < books.size(); i++) {
		cout << i+1 << ")";
		books.at(i).showInfo();
	}
}

