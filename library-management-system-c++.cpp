Library management system in c++
#include <iostream>
#include <string>

using namespace std;

struct Library
{
    string Title;
    string Author;
    int Price;
    int id;
} book[100];

int bookCount = 0; // Variable to store the count of books

void addBook()
{
    cout << "Library Management System\n\n";
    cout << "Enter the title of the book\n";
    cin >> book[bookCount].Title;
    cout << "Enter the name of the author\n";
    cin >> book[bookCount].Author;
    cout << "Enter the Id of the book\n";
    cin >> book[bookCount].id;
    cout << "Enter the price of the book\n";
    cin >> book[bookCount].Price;
    bookCount++;
}

void display()
{
    cout << "Id\t\t\tTitle\t\t\tAuthor\t\t\t\tPrice\n";
    for (int j = 0; j < bookCount; j++)
    {
        cout << book[j].id << "\t\t\t";
        cout << book[j].Title << "\t\t\t";
        cout << book[j].Author << "\t\t\t\t";
        cout << book[j].Price << endl;
    }
}

int countBooks()
{
    return bookCount;
}

void searchBook()
{
    int searchID;
    cout << "Enter the book ID to search: ";
    cin >> searchID;

    for (int i = 0; i < bookCount; ++i)
    {
        if (book[i].id == searchID)
        {
            cout << "Book found:\n";
            cout << "Title: " << book[i].Title << endl;
            cout << "Author: " << book[i].Author << endl;
            cout << "Price: " << book[i].Price << endl;
            return;
        }
    }

    cout << "Book not found with ID " << searchID << ".\n";
}

void deleteBook()
{
    int deleteID;
    cout << "Enter the book ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < bookCount; ++i)
    {
        if (book[i].id == deleteID)
        {
            for (int j = i; j < bookCount - 1; ++j)
            {
                book[j] = book[j + 1];
            }

            bookCount--;
            cout << "Book with ID " << deleteID << " deleted successfully.\n";
            return;
        }
    }

    cout << "Book not found with ID " << deleteID << ". Deletion failed.\n";
}

int main()
{
    int choice;
    while (true)
    {
        cout << "Enter the task that you want to perform\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Count Books\n";
        cout << "4. Search Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            display();
            break;
        case 3:
            cout << "Total number of books: " << countBooks() << endl;
            break;
        case 4:
            searchBook();
            break;
        case 5:
            deleteBook();
            break;
        case 6:
            cout << "Exiting the program. Goodbye!\n";
            exit(0);
        default:
            cout << "Invalid option. Please enter a valid option.\n";
            break;
        }
    }

    return 0;

Library management system in c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Library
{
    char Title[50];
    char Author[20];
    int Price;
    int id;
} book[100];

int bookCount = 0; // Variable to store the count of books

void addBook()
{
    printf("Library Management System\n\n");
    printf("Enter the title of the book\n");
    scanf("%s", book[bookCount].Title);
    printf("Enter the name of the author\n");
    scanf("%s", book[bookCount].Author);
    printf("Enter the Id of the book\n");
    scanf("%d", &book[bookCount].id);
    printf("Enter the price of the book\n");
    scanf("%d", &book[bookCount].Price);
    bookCount++;
}

void display()
{
    int j;
    printf("Id\t\t\tTitle\t\t\tAuthor\t\t\t\tPrice\n");
    for (j = 0; j < bookCount; j++)
    {
        printf("%d\t\t\t", book[j].id);
        printf("%s\t\t\t", book[j].Title);
        printf("%s\t\t\t\t", book[j].Author);
        printf("%d\n", book[j].Price);
    }
}

int countBooks()
{
    return bookCount;
}

void searchBook()
{
    int searchID;
    printf("Enter the book ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < bookCount; ++i)
    {
        if (book[i].id == searchID)
        {
            printf("Book found:\n");
            printf("Title: %s\n", book[i].Title);
            printf("Author: %s\n", book[i].Author);
            printf("Price: %d\n", book[i].Price);
            return;
        }
    }

    printf("Book not found with ID %d.\n", searchID);
}

void deleteBook()
{
    int deleteID;
    printf("Enter the book ID to delete: ");
    scanf("%d", &deleteID);

    for (int i = 0; i < bookCount; ++i)
    {
        if (book[i].id == deleteID)
        {
            for (int j = i; j < bookCount - 1; ++j)
            {
                book[j] = book[j + 1];
            }

            bookCount--;
            printf("Book with ID %d deleted successfully.\n", deleteID);
            return;
        }
    }

    printf("Book not found with ID %d. Deletion failed.\n", deleteID);
}

int main()
{
    int choice;
    while (1)
    {
        printf("Enter the task that you want to perform\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Count Books\n");
        printf("4. Search Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Total number of books: %d\n", countBooks());
            break;
        case 4:
            searchBook();
            break;
        case 5:
            deleteBook();
            break;
        case 6:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid option. Please enter a valid option.\n");
            break;
        }
    }

    return 0;
}

