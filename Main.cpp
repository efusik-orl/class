#include "Library.h"
#include <Windows.h>
#include <string>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Library library = Library();

    char choice;
    do {
        cout << "\n1. Показать все книги\n";
        cout << "2. Добавить книгу\n";
        std::cout << "3. Поиск книги по автору\n";
        std::cout << "4. Удалить книгу\n";
        std::cout << "5. Закончить программу\n\n";
        std::cout << "Введите номер действия: ";
        std::cin >> choice;
        string bookTitle, bookAuthor;
        int bookYear;
        string author;
        int bookNumber;
        Book book;
        bool valid = false;
        switch (choice)
        {
        case '1':
            library.showAllBooks();
            break;
        case '2': 
            cout << "Введите название книги: ";
            getchar();
            getline(cin, bookTitle);
            cout << "Введите автора книги: ";
            getchar();
            getline(cin, bookAuthor);
            cout << "Введите год издания книги: ";
            cin >> bookYear;
            while (!cin)
            {
                cout << "Значение не верно! Введите другое знаечение: ";
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cin >> bookYear;
            }
            book.setTitle(bookTitle);
            book.setAuthor(bookAuthor);
            book.setYear(bookYear);
            library.addBook(book);
            break;
        case '3': 
            cin >> author;
            library.showBooks(author);
            break;
        case '4':
            cout << "Введите порядковый номер книги: ";
            cin >> bookNumber;
            library.deleteBook(bookNumber);
            break;
        case '5': return 0;
        }
    } while (choice != '5');
    return 0;
}