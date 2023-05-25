/* Checks whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    FILE *fp;
    
    if(argc != 2)
    {
        printf("usage: cannopen filename\n");
        exit(EXIT_FAILURE);
    }
/* 实际上是看第1个参数对应的文件能否返回指针，第0个是canopen本身的名字 */

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("%s can not be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("%s can be opened\n", argv[1]);
    fclose(fp);
    return 0;
}