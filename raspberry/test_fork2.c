#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    __pid_t pid;
    pid = fork();

    if(pid > 0)
    {
        printf("parent: child")
    }
}