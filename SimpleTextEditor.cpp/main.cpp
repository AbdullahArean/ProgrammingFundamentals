#include <stdio.h>
int write()
{
    char num[1000], fname[100];
    FILE *fptr;
    printf("Give The File Name:\n");
    scanf("%s", fname);

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen(fname, "w");

    if (fptr == NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("Give Your Writings Here:\n");
    scanf("%s", num);

    fprintf(fptr, "%s", num);
    fclose(fptr);

    return 0;
}
int read()
{
    char str[10000], fname[1000];
    FILE *fptr;
    printf("Give The File Name:\n");
    scanf("%s", fname);
    if ((fptr = fopen(fname, "r")) == NULL)
    {
        printf("Error! opening file\n");

        // Program exits if the file pointer returns NULL.
        return 0;
    }

    fscanf(fptr, "%s", str);
    printf("=========>Your File is:\n");
    printf("%s\n", str);
    printf("========>Your file Successfully Printed\n");
    fclose(fptr);

    return 0;
}

int main()
{
    while (1)
    {
        printf("What do you want to do?\n");
        printf("0.Exit\n1.Read\n2.Write\nYour Input===>");
        int inp;
        scanf("%u", &inp);
        switch (inp)
        {
        case 1:
            read();
            break;
        case 2:
            write();
            break;

        case 0:
            return 0;

        default:
            return 0;
            break;
        }
    }
}