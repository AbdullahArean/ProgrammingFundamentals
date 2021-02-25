#include <stdio.h>

typedef struct Book
{
    int id, year;
    char title[26], genre[26], author[26], language[26];
} Book;

int main()
{
    int N;
    scanf("%d", &N);
    struct Book barray[1000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %s %s %s %d", &barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, &barray[i].year);
    }

}