#include <stdio.h>

int main(void)
{
    int gs1, group_id, publisher, itemNum, checkCode;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher, &itemNum, &checkCode);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher: %d\n", publisher);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkCode);
}