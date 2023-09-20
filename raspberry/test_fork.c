#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    __pid_t pid;
    printf("before: parent pid: %d\n", getpid());
    pid = fork();

    if (pid < 0)
    {
        printf("fork error\n");
        exit(1);
    }

    else if (pid == 0)
    {
        printf("after: child: %d\n", getpid());
        sleep(1);
    }

    else
    {
        /* parent process */
        printf("after: parent: %d\n", getpid());
        sleep(2);
    }
}