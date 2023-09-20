#include <stdio.h>

struct student{
    char name[20];
    int age;
};

int main(void)
{
    struct student stu1 = {"wit", 20};
    printf("%s:%d\n", stu1.name, stu1.age);

    struct student stu2 =
    {
        .name = "wanglitao",
        .age = 28
    };

    printf("%s:%d\n", stu2.name, stu2.age);

    return 0;
}


