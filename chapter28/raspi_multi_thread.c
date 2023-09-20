#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *func1(void *);
void *func2(void *);
void *func3(void *);

void *(*func[3])(void *dummy)= {
    func1,
    func2,
    func3
};

int main(void)
{
    int i =0, iret = 0;

    pthread_t pthread_id[3];

    for(int j=0;j<3;j++)
    {
        iret = pthread_create(&pthread_id[j], NULL, func[j], NULL);
        if(iret)
        {
            printf("Cannot create thread%ld", pthread_id[j]);
            return 1;
        }
    }

    // wiat for func3.
    pthread_join(pthread_id[2], NULL);
    printf("Main thread exit. \n");
    
    return 0;
}

void *func1(void *dummy)
{
    int i;
    for(i =0;i<5;i++)
    {
        printf("func1 is running %d\n", i);
        sleep(1);
    }

    return NULL;
}

void *func2(void *dummy)
{
    int i;
    for(i =0;i<5;i++)
    {
        printf("func2 is running %d\n", i);
        sleep(1);
    }
    return NULL;
}

void *func3(void *dummy)
{
    int i;
    for(i =0;i<5;i++)
    {
        printf("func3 is running %d\n", i);
        sleep(1);
    }
    return NULL;
}




