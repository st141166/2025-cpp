#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct 
{
    char firstName[50];
    char lastName[50];
} Author;

typedef struct 
{
    Author* authors;
    int count;
    int capacity;
} AuthorList;

typedef struct 
{
    char title[100];
    int year;
    AuthorList authors;
} Book;

void init_author_list(AuthorList* al) 
{
    al->count = 0;
    al->capacity = 2;
    al->authors = (Author*)malloc(al->capacity * sizeof(Author));
}

void add_author(AuthorList* al, const char* firstName, const char* lastName) 
{
    if (al->count >= al->capacity) 
    {
        al->capacity *= 2;
        al->authors = (Author*)realloc(al->authors, al->capacity * sizeof(Author));
    }
    
    strcpy(al->authors[al->count].firstName, firstName);
    strcpy(al->authors[al->count].lastName, lastName);
    al->count++;
}

void free_author_list(AuthorList* al) 
{
    free(al->authors);
    al->authors = NULL;
    al->count = 0;
    al->capacity = 0;
}

Book* create_books(int n) 
{
    Book* books = (Book*)malloc(n * sizeof(Book));
    for (int i = 0; i < n; i++) 
    {
        init_author_list(&books[i].authors);
    }
    return books;
}

Book* find_book_with_most_authors(Book* books, int n) 
{
    if (n <= 0) return NULL;

    Book* most_authors_book = &books[0];
    int max_authors = books[0].authors.count;

    for (int i = 1; i < n; i++) 
    {
        int current_authors = books[i].authors.count;
        if (current_authors > max_authors) 
        {
            most_authors_book = &books[i];
            max_authors = current_authors;
        }
    }
    return most_authors_book;
}

void print_book(const Book* book) 
{
    printf("Книга: %s, год: %d\n", book->title, book->year);
    printf("Авторы (%d):\n", book->authors.count);
    
    for (int i = 0; i < book->authors.count; i++) 
    {
        printf("  %d. %s %s\n", i + 1, 
               book->authors.authors[i].firstName, 
               book->authors.authors[i].lastName);
    }
    printf("\n");
}

void free_books(Book* books, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        free_author_list(&books[i].authors);
    }
    free(books);
}

void clear_input_buffer() 
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) 
{
    if (str != NULL) 
    {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') 
        {
            str[len - 1] = '\0';
        }
    }
}

int main(int argc, char** argv) 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    
    int n = 0;
    printf("Количество книг: ");
    scanf("%d", &n);
    clear_input_buffer();

    Book* books = create_books(n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nКнига %d:\n", i + 1);
        
        printf("Название: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        clear_last_linebreak(books[i].title);
        
        printf("Год: ");
        scanf("%d", &books[i].year);
        clear_input_buffer();

        int author_count = 0;
        printf("Кол-во авторов: ");
        scanf("%d", &author_count);
        clear_input_buffer();

        printf("Введите %d авторов:\n", author_count);
        for (int j = 0; j < author_count; j++) 
        {
            char firstName[50], lastName[50];
            
            printf("Автор %d:\n", j + 1);
            printf("  Имя: ");
            fgets(firstName, sizeof(firstName), stdin);
            clear_last_linebreak(firstName);
            
            printf("  Фамилия: ");
            fgets(lastName, sizeof(lastName), stdin);
            clear_last_linebreak(lastName);
            
            add_author(&books[i].authors, firstName, lastName);
        }
    }

    printf("\n=== Все книги ===\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\n%d. ", i + 1);
        print_book(&books[i]);
    }

    Book* book_with_most_authors = find_book_with_most_authors(books, n);
    if (book_with_most_authors) 
    {
        printf("\n=== Книга с макс. авторами ===\n");
        print_book(book_with_most_authors);
    }

    free_books(books, n);
    
    printf("\nЗавершено.\n");
    return 0;
}