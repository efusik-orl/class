#include "Library.h"
#include <Windows.h>
#include <string>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Library library = Library();

    char choice;
    do {
        cout << "\n1. �������� ��� �����\n";
        cout << "2. �������� �����\n";
        std::cout << "3. ����� ����� �� ������\n";
        std::cout << "4. ������� �����\n";
        std::cout << "5. ��������� ���������\n\n";
        std::cout << "������� ����� ��������: ";
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
            cout << "������� �������� �����: ";
            getchar();
            getline(cin, bookTitle);
            cout << "������� ������ �����: ";
            getchar();
            getline(cin, bookAuthor);
            cout << "������� ��� ������� �����: ";
            cin >> bookYear;
            while (!cin)
            {
                cout << "�������� �� �����! ������� ������ ���������: ";
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
            cout << "������� ���������� ����� �����: ";
            cin >> bookNumber;
            library.deleteBook(bookNumber);
            break;
        case '5': return 0;
        }
    } while (choice != '5');
    return 0;
}