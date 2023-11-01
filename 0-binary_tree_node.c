#include "binary_trees.h"
/**
 * binary_trees_node - function for create a nodes
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: Null or newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_Node;
    new_Node = (binary_tree_t* ) malloc(sizeof(binary_tree_t));
    if (new_Node == NULL)
    {
        return (NULL);
    }
    new_Node->n = value;
    new_Node->parent = parent;
    new_Node->left = NULL;
    new_Node->right = NULL;
    return (new_Node);
}