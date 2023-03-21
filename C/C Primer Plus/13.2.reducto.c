#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char* argv[])
{
    FILE *in, *out;
    int ch;
    int count = 0;
    char name[LEN];

    if(argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if (NULL == (in = fopen(argv[1], "r")))
    {
        fprintf(stderr, "I cloud not open the file.\"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    if(NULL == (out = fopen(name, "w")))
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while(EOF != (ch = getc(in)))
        if(0 == count++ % 3)
            putc(ch, out);
    if (0 != fclose(in) || 0 != fclose(out))
        fprintf(stderr, "Error in closing files\n");


    return 0;
}
