#include <stdio.h>
#include "tree.h"
#include <stdbool.h>
#include <string.h>

/* 添加项函数 */

bool AddItem(const Item *pi, Tree *ptree)
{
    Trnode *new_node;
    if(TreeIsFull(ptree))
    {
        fprintf(stderr, "Tree is full\n");
        return false; /* 提前返回 */
    }
    if(SeekItem(pi, ptree).child != NULL)
    {
        fprintf(stderr, "Attempted to add duplicate item\n");
        return false; /* 提前返回 */
    }

    new_node = MakeNode(pi);
    
    if(new_node == NULL)
    {
        fprintf(stderr, "Couldn't create node\n");
        return false; /* 提前返回 */
    }

    /* 这里创建了一个新节点 */
    ptree -> size++;
    if(ptree->root == NULL) /* ptree为空树 */
        ptree->root = new_node; /* 新节点是根节点 */
    
    else /* ptree不为空树 */
        AddItem(new_node, ptree->root);
    return true;  /* 往非空的树中添加了一个节点 ，返回成功 */
}

/* *pi是一个指向树节点中Item结构体的指针 */
static Trnode *MakeNode(const Item *pi)
{
    Trnode *new_node;
    new_node = (Trnode *)malloc(sizeof(Trnode));
    
    if(new_node != NULL)
    {
        new_node->item = *pi;
        new_node->left = NULL;
        new_node->right = NULL;
    }

    return new_node;
}

static void AddNode(Trnode *new_node, Trnode *root)
{
    if(Toleft(&new_node->item, &root->item))
    {
        if(root->left == NULL) /* 子树为空 */
            root->left = new_node;
        else
            AddNode(new_node, root->right); /* 如果不处理左子树，处理右子树 */
    }

    else if(ToRight(&new_node->item, &root->item))
    {
        if(root->right == NULL)
            root->right = new_node;
        else
            AddNode(new_node, root->right);
    }

    else /* 含有重复的项，错误 */
    {
        fprintf(stderr, "location error in AddNote()\n");
        exit(1);
    }
}

static bool ToLeft(const Item *i1, const Item *i2)
{
    int comp1;
    if((comp1 = strcmp(i1->petname, i2->petname))<0)
        return true;

    else if(comp1 == 0 && strcmp(i1->petkind, i2->petkind)<0)
        return true;

    else
        return false;
}


/* 查找项 */

typedef struct pair{
    Trnode *parent;
    Trnode *child;
} Pair;

static Pair SeekItem(const Item *pi, const Tree *ptree)
{
    Pair look;
    look.parent = NULL;
    look.child = ptree->root;

    if(look.child == NULL)
        return look; /* 提前退出 */
    
    while(look.child != NULL)
    {
        if(Toleft(pi, &(look.child->item)))
        {
            look.parent = look.child;
            look.child = look.child->left;
        }

        else if (ToRight(pi, &(look.child->item)))
        {
            look.parent = look.child;
            look.child = look.child->right;
        }

        else  /* 如果前面两种情况都不满足，则必定是相等的情况 */
            break; /* 找到了目标项 */
    }

    return look; /* 成功返回 */
}

bool InTree(const Item *pi, const Tree *ptree)
{
    return(SeekItem(pi, ptree).child == NULL?false:true);
}

/* 删除项，比较复杂，需要重新连接 */
/* 最简单是空树，然后是有一个节点，最复杂是有两个节点 */

static void DeleteNode(Trnode **ptr)
{
    Trnode *temp;

    if((*ptr)->left == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->right;
        free(temp);
    }

    else if ((*ptr)->right == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }

    else
    {
        for(temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
        continue;

        temp->right = (*ptr)->right;
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
}

bool DeleteItem(const Item *pi, Tree *ptree)
{
    Pair look;
    look = SeekItem(pi, ptree);
    if(look.child == NULL)
        return false;
    if(look.parent == NULL)
        DeleteNode(&ptree->root);
    
    else if (look.parent->left == look.child)
        DeleteNode(&look.parent->left);
    
    else
        DeleteNode(&look.parent->right);
    
    ptree->size--;
    return true;
}

void Traverse(const Tree *ptree, void(*pfun)(Item item))
{
    if(ptree != NULL)
    InOrder(ptree->root, pfun);
}

static void InOrder(const Trnode *root, void(*pfun)(Item item))
{
    if(root != NULL)
    {
        InOrder(root->left, pfun);
        (*pfun)(root->item);
        InOrder(root->right, pfun);
    }
}

/* 清空树 */

void DeleteAll(Tree *ptree)
{
    if(ptree != NULL)
    DeleteAllNodes(ptree->root);
    ptree->root = NULL;
    ptree->size = 0;
}

static void DeleteAllNodes(Trnode *root)
{
    Trnode *pright;
    if(root != NULL)
    {
        pright = root->right;
        DeleteAllNodes(root->left);
        free(root);
        DeleteAllNodes(pright);
    }
}
