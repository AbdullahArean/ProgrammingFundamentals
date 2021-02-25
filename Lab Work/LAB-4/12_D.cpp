//12
//12
//12
#include <stdio.h>
#include <string.h>
#include <iostream>

#include <algorithm>
using namespace std;
typedef struct book
{
    int id, year;
    char title[26], genre[26], author[26];

} book;
typedef struct yf
{
    int i;
    int year;
} yf;

typedef struct gf
{
    int i;
    char genre[26];
} gf;
bool mc2(struct gf a, struct gf b)
{
    return strcmp(a.genre, b.genre);
}
bool mc(struct yf p, struct yf b)
{
    return p.year > b.year;
}
int lower_bound1(struct gf arr[], int N, char *X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (strcmp(X,arr[mid].genre)<=0)
        {
            high = mid;
        }

        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int upper_bound1(struct gf arr[], int N, char *X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;

        if (strcmp(X,arr[mid].genre)>=0)
        {
            low = mid + 1;
        }

        else
        {
            high = mid;
        }
    }

    return low;
}
int lower_bound(struct yf arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (X <= arr[mid].year)
        {
            high = mid;
        }

        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int upper_bound(struct yf arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;

        if (X >= arr[mid].year)
        {
            low = mid + 1;
        }

        else
        {
            high = mid;
        }
    }

    return low;
}
int main()
{
    int nb;
    scanf("%d", &nb);
    struct book bfair[1009];
    struct yf yearfind[1009];
    struct gf genrefind[1009];
    for (int i = 0; i < nb; i++)
    {
        scanf("%d %s %s %s %d", &bfair[i].id, bfair[i].title, bfair[i].genre, bfair[i].author, &bfair[i].year);
        yearfind[i].i = i;
        yearfind[i].year = bfair[i].year;
        genrefind[i].i = i;
        strcpy(genrefind[i].genre, bfair[i].genre);
    }
    sort(yearfind, yearfind + nb, mc);
    sort(genrefind, genrefind + nb, mc2);

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int c;
        scanf("%d",&c);
        if (c == 1)
        {
            int y;
            scanf("%d", &y);
            int l = lower_bound(yearfind, nb, y);
            int j = upper_bound(yearfind, nb, y);
            for (int l = 0; l < j; l++)
            {
                if (yearfind[l].year == y)
                {
                    int i = yearfind[l].i;
                    printf("%d %s %s %s %d", bfair[i].id, bfair[i].title, bfair[i].genre, bfair[i].author, bfair[i].year);
                }
            }
        }
        else
        {
            char inp[26];
            scanf("%s", inp);
            int l = lower_bound1(genrefind, nb, inp);
            int j = upper_bound1(genrefind, nb, inp);
            for (int l = 0; l < j; l++)
            {
                if (strcmp(genrefind[l].genre,inp)==0)
                {
                    int i = genrefind[l].i;
                    printf("%d %s %s %s %d", bfair[i].id, bfair[i].title, bfair[i].genre, bfair[i].author, bfair[i].year);
                }
            }
        }
    }
}