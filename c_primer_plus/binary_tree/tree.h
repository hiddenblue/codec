/* tree.h 二叉查找树 */
/* 树中不允许有重复的项 */

#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

/* 根据实际情况重新定义Item */

#define SLEN 20
typedef struct item {
    char petname[SLEN];
    char petkind[SLEN];
}Item;

#define MAXITEMS 10
typedef struct trnode
{           
    Item item;
    struct trnode *left;
    struct trnode *right;
}Trnode;

typedef struct tree
{
    Trnode *root;
    int size;
}Tree;

void initializeTree(Tree *ptree);

bool TreeIsEmpty(const Tree *ptree);

bool TreeIsFull(const Tree *ptree);

int TreeItemCount(const Tree *ptree);

bool AddItem(const Item *pi, Tree *ptree);

bool InTree(const Item *pi, const Tree *ptree);

bool DeleteItem(const Item *pi, Tree *ptree);

/* 把函数应用于树中的每一项 */
/* 前提条件： ptree 指向一棵树 */
/* pfun指向一个函数 */
/* 该函数接受一个Item类型的参数，并无返回值 */
/* 后置条件：pfun 指向的这个函数为树中的每一项执行一次 */

void Traverse(const Tree *ptree, void(*pfun)(Item item));

void DeleteAll(Tree *ptree);

#endif