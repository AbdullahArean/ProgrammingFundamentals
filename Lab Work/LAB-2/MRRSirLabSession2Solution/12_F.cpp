//12
#include <stdio.h>

typedef struct Alpha
{
    int ct;
    int pos;
    bool vc; //if vowel stores 1, if consonant stores 0

} Alpha; //declaring a structure to store all the infos!


int main()
{
    Alpha ab[27] = {0};
    char ch;
    int temp;
    int v1 = -1, v2 = -2, c1 = -1, c2 = -2, t3, t4;
    while ((ch = getchar()) != EOF)
    {
        //printf("%c",ch);
        if (ch >= 'a' && ch <= 'z')
        {
            int p = ch - 97;
            if (ab[p].ct != 0)
            {
                ab[p].ct++;
            }
            else
            {
                ab[p].ct = 1;
                ab[p].pos = ch - 32;
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    ab[p].vc = 1;
                }
                else
                    ab[p].vc = 0;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d %c %d\n", ab[i].ct, ab[i].pos, ab[i].vc);
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (ab[i].vc == 1)
        {
            temp = ab[i].ct;
            //int tempv1, tempv2;
            if (temp <= v2 || temp == v1)
                continue;
            else if (temp > v1)
            {
                v2 = v1;
                v1 = temp;
            }
            else if (temp > v2 && temp < v1)
                v2 = temp;
        }
        else
        {
            temp = ab[i].ct;
            //int tempv1, tempv2;
            if (temp <= c2 || temp == c1)
                continue;
            else if (temp > c1)
            {
                c2 = c1;
                c1 = temp;
            }
            else if (temp > c2 && temp < c1)
                c2 = temp;
        }
    }
    //printf("%d %d %d %d\n", c1, v1, c2, v2);
    if (v2 > c2)
    { //printf("Executed\n");
        t3 = v2;
        t4 = c2;
    }
    else if (c2 > v2)
    {
        //printf("Executed\n");
        t3 = c2;
        t4 = v2;
    }
    else
    {
        t3 = v2;
        t4 = v2;
    }
    if (v1 <= 0 || v2 <= 0 || t3 <= 0 || t4 <= 0)
    {
        printf("Warning!! Insufficient Text!!");
        return 0;
    }
    //printf("%d %d %d %d\n", c1, v1, t3, t4);
    for (int i = 0; i < 26; i++)
    {
        //if(ab[i].ct==c1)
        if (ab[i].ct == c1 && ab[i].vc == 0)
        {
            //printf("1.%c\n", ab[i].pos);
            for (int j = 0; j < 26; j++)
            {
                if (ab[j].ct == v1 && ab[j].vc == 1)
                {
                    //printf("2.%c\n", ab[j].pos);
                    for (int k = 0; k < 26; k++)
                    {
                        if (ab[k].ct == t3)
                        {
                            //printf("3.%c\n", ab[k].pos);
                            for (int l = 0; l < 26; l++)
                            {
                                if (ab[l].ct == t4 && ab[k].vc != ab[l].vc)
                                    //printf("4.%c\n", ab[l].pos);
                                    printf("%c%c%c%c\n", ab[i].pos, ab[j].pos, ab[k].pos, ab[l].pos);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
