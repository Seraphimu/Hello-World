#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me aletter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
        {
            switch (ch)
            {
                case 'a':
                    printf("argali, a wild sheep of Asia.\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay.\n");
                    break;
                default:
                    printf("That is a stumper!\n");
            }
        }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')   //skip another alphabetics
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}