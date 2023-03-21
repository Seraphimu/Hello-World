#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char* s_gets(char* st, int n);
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index = 0;

    puts("Please enter the book title.");
    puts("Press [enter] at the start of a line to stop.");
    //Input many book's information:
    //If input is empty or count >= MAXBKS or 
    //title[0] is not null character break the while loop:
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
        && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next title.");
    }

    //Output many books(include title author and value):
    if (count > 0)
    {
        puts("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                library[index].author, library[index].value);
    }
    else
        puts("No books? Too bad.");

    return 0;
}


char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}