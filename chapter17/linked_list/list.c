#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void)
{
    /* 为链表创建指向第一个节点的指针 */

    struct node *first = NULL;

    /* 创建节点 */
    struct node *new_node;

    /* 使用头插法，新节点加在链表最前端 */

    /* first 和newnode永远指向第一个节点 */
    
    new_node = malloc(sizeof(struct node));

    new_node->value = 10;

    new_node->next = first;

    first = new_node;

    new_node = malloc(sizeof(struct node));

    new_node->value = 20;

    new_node->next = first;

    first = new_node;


    return 0;   

}


/* list 指向链表的第一个节点，就像前面的first */

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Error: malloc failed in add to list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;

    /* 这里我想到两种方式， 第一种是最后把list 指向newnode 作为新的list返回，或者直接返回new_node作为新的list */
    
    // list = new_node;

    // return list;

    return new_node;
}

struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");

    for(;;)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        first = add_to_list(first, n);
    }
}

/* 搜索链表 一个关键点是list最后一个节点的是空指针 即便上上面的方法，后面是个单纯的指针，最开始的first也是null */

struct node *search(struct node *list, int n)
{
    struct node *p;
    for(p = list; p != NULL; p = p->next)
        if(p->value == n)
            return p;
    return NULL;
}

/* 另一种不需要声明*p指针，list是原来复制值得写法 */

struct node *search2(struct node *list, int n)
{
    for(; list != NULL; list =list->next)
        if(list->value == n)
            return list;
    return NULL; 
}

/* 删除节点，麻烦点在于单链表遍历到目标节点时，无法追踪上一个节点 */

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for(cur = list, prev = NULL;
    (cur != NULL)&&(cur->value != n);
    prev = cur, cur = cur->next)
    ;

    if(cur = NULL)
        return list; /* 没有找到value */

    if(prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;
    free(cur);
    return list;
}

