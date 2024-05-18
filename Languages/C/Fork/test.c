#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t p = fork();

    pid_t par = getpid();
    printf("%d\n", par);

    if (p < 0)
    {
        printf("error: %d\n", p);
    }
    else if (p > 0)
    {
        printf("Parent Process: %d\n", p);
    }
    else
    {
        //
        printf("%d\n", p);
    }

    //Parent Process
    printf("hello\n");
    return 0;
}
