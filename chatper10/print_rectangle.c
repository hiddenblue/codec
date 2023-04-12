#include <stdio.h>

void print_all_row(void);
void print_one_row(void);
int i;

int main(void)
{

    print_all_row();
}

void print_one_row(void)
{
    for (i=1;i<=10;i++)
        printf("*");
}

void print_all_row(void)
{
    for(i=1;i<=10;i++)
    {
        print_one_row();
        printf("\n");
    }
}

