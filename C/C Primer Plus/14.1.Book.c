//14.1.Book.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

//Define a structure:
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

////or:
// struct book {
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// }library;

char* s_gets(char* st, int n);
int main(void)
{
    struct book library;

    // printf("&library = %p\n", &library);
    // printf("sizeof(library) = %zd", sizeof(library));

    puts("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    puts("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    puts("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    puts("Done.\n");

    return 0;
}

char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;
    //st is array, n is max input(include '\0'):
    ret_val = fgets(st, n, stdin);
    //if point is not "NULL":
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
