/* test command argc and argv */

#include <stdio.h>

int main(int argc, char *argv[])
{

/* 数组下标实现访问命令行参数数组 */
    int i;
    printf("%d\n", argc);

    for(i=0;i<argc;i++)
    {
        printf("%s\n", argv[i]);
    }

    printf(" 6\n");

    char **p;
    for(p=argv;*p!=NULL;p++)
        printf("%s\n", *p);
}
