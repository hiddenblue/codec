/* Maintains a parts database (array version) */

#include <stdio.h>
#include "read_line.h"
#include "inventory.h"

Part inventory[MAX_PARTS];

int num_parts = 0; /* number of parts currently stored */

/* 这里把每次对数据库进行操作时的都需要执行的查找操作单独写成了一个函数，方便复用 */
int find_part(int number)
{
    int i;

    for(i=0;i<num_parts;i++)
    {
        if(inventory[i].number == number)
            return i;
    }
            return 0;

}

int insert(void)
{
    int part_number;

    if(num_parts == MAX_PARTS)
    {
        printf("Database is full; can't add more parts.\n");
        return 0;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if(find_part(part_number))
    {
        printf("Part already exists.\n");
        return 0;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
    return 1;
}

int search(void)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);

    /* 下面写了一个稍微复杂的分支，主要应当数据库第一个项目的索引为0和未查找到返回值为0冲突的问题 */
    
    if(i)
    {
        printf("Part number: %d\n", inventory[i].number);
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
        return 1;
    }
    else if ((i == 0) && (inventory[i].number == number) )
    {
        printf("Part number: %d\n", inventory[i].number);
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
        return 1;
    }
    else
    {
        printf("Part not found. \n");
        return 0;
    }
}

int update(void)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i)
    {
        printf("Part number: %d\n", inventory[i].number);
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);

        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
        return 1;
    }
    else if ((i == 0) && (inventory[i].number == number) )
    {
        printf("Part number: %d\n", inventory[i].number);
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);

        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
        return 1;
    }
    else
    {
        printf("Part not found. \n");
        return 0;
    }
}

int delete(void)
{
    int i, j, number;
    char signal;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i||(inventory[i].number == number))
    {
        printf("Part number: %d\n", inventory[i].number);
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);

        printf("Are you Sure to delete this item ? Yes or NO (y/s)");
        scanf(" %c", &signal);

        /* 这里我们对要删除条目的内容进行移动，结构体是可以进行赋值操作的，注意j+1不能访问越界 */
        if((signal == 'Y')||signal == 'y')
        {
            for(j=i;j<num_parts;j++)
            {
                inventory[j] = inventory[j+1];
            }
            num_parts--;
            return 1;
        }

        if((signal == 'N')||signal == 'n')
        {       
            printf("Delete operation is canceled");
            return 0;
        }
        return 0;

    }
}


void print(void)
{
    int i;

    printf("Part Number\tPart Name\tQuantity on Hand\n");
    for(i=0;i<num_parts;i++)
    {
        printf("%d\t%s\t%d\n", inventory[i].number,
         inventory[i].name, inventory[i].on_hand);
    }

}

