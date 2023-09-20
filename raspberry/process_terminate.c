#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();
    if(pid < 0)
    {
        printf("fork error");
    }
    else if(pid ==0)
    {
        int sum = 0;
        for(int i=0;i<10000000;i++)
        {
            for(int j =0;j< 100;i++);
            {
                sum +=i;
            }
        }
        exit(0);
    }
    else
    {
        int status;
        printf("son pid %d...\n", pid);

        do
        {
            waitpid(pid, &status, WUNTRACED);

        }while(!WIFEXITED(status)&& !WIFSIGNALED(status));

        printf("son process return %d\n", status);
    }


}