#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // 子进程
        printf("子进程先跑\n");
    }
    else {
        // 父进程
        //__pid_t wait (int *__stat_loc);
        wait(NULL);
        printf("等子进程结束再跑父进程\n");
    }
    printf("parent: %d\n", getpid());
    printf("child: %d\n", pid);

    return 0;
}






// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>

// int main() {
//     pid_t pid = fork();

//     if (pid == 0) {
//         // 子进程
//         //以ls -al为例
//         char *args[] = {"ls", "-al", NULL};
//         //int execvp (const char *file, char *const argv[]);
//         execvp("ls", args);
//         // execvp 调用失败时的错误处理
//         perror("execvp");
//     }
//     else {
//         // 父进程
//         printf("Parent process continues...\n");
//     }

//     return 0;
// }






// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>

// #define LOOP_COUNT 5

// int main(void)
// {
//     pid_t son, daughter;

//     son = fork();

//     if (son == 0)
//     {
//         //子进程1
//         for (int i = 0; i < LOOP_COUNT; i++)
//         {
//             printf("son\n");
//         }
//     }
//     else
//     {
//         daughter = fork();
//         if (daughter == 0)
//         {
//             //子进程2
//             for (int i = 0; i < LOOP_COUNT; i++)
//             {
//                 printf("daughter\n");
//             }
//         }
//         else
//         {
//             for (int i = 0; i < LOOP_COUNT; i++)
//             {
//                 //父进程
//                 printf("parents\n");
//             }
//         }
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <sys/types.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main(void)
// {
//     printf("main: pid = %d\n", getpid());
//     pid_t b, c;

//     b = fork();//创建子进程b

//     printf("b = %d\n", b);
//     //在子进程中fork()的返回值为0
//     if (b == 0)
//     {
//         //子进程b
//         printf("b pid = %d\n", b);
//     }
//     else
//     {
//         c = fork();
//         if (c == 0)
//         {
//             //子进程c
//             printf("c pid = %d\n", c);
//         }
//         else
//         {
//             //父进程
//             printf("a pid = %d\n", getpid());
//         }
//     }

//     return 0;
// }
