#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigint_handler(int sig);

int main(void)
{
    signal(SIGINT, sigint_handler);

    while(1)
    {
        printf("waiting...\n");
        sleep(1);
        // raise(SIGINT);
    }

    return 0;
}

void sigint_handler(int sig)
{
    printf("Received SIGINT\n");
}