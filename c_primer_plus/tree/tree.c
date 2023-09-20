#include "tree.h"
#include <stdio.h>
#include <stdlib.h>



bool AddItem(const Item *pi, Tree *ptree)
{
    Trnode *new_node;
    if(TreeIsFull(ptree))
    {
        fprintf(stderr, "Tree is full\n");
        return false;   
    }
    if(SeekItem(pi, ptree).child != NULL)
    {
        fprintf("stderr", "Attempt to add duplicate item\n");
        return false;
    }

    new_node = MakeNode(pi);
    if(new_node == NULL)
    {
        fprintf(stderr, "Couldn't create node\n");
        return false;
    }
    ptree->size++;

    if(ptree->root == NULL)
    {
        ptree->root = new_node;
    }
    else
    {
        AddNote(new_node, Tree *ptree);
    }
    return true;

}

static Trnode * MakeNode(const Item *pi)
{
    Trnode * new_node;
    new_node = (trnode *)malooc(sizeof(Trnode));
    
    if(new_node != NULL)
    {
        new_node->item = *pi;  /* 这里是因为结构体可以直接复制 */
        new_node->left = NULL;
        new_node->right = NULL;
    }

    return new_node;
}

static void AddNode(Trnode *new_node, Trnode *root)
{

    if(Toleft(&new_node->item, &root->item))
    {
        if (root->left == NULL)
            root->left = new_node;
        else
            AddNode(new_node, root->left);
    }
    else if (Toright(&new_node->item, &root->item))
    {
        if(root->right == NULL)
            root->right = new_node;
        else
            AddNode(new_node, root->right);  
    }
    else
    {
        fprintf(stderr, "location error in AddNode()\n");
        exit(1);
    }
}