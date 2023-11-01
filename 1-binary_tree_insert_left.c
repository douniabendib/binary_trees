#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: NULL or newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Left;

	if (parent == NULL)
		return (NULL);
	new_Left = binary_tree_node(parent, value);
	
	if (new_left == NULL)
		return (NULL);
	if (parent-left != NULL)
	{
		new_Left->left = parent->left;
		new_Left->left->parent = new_Left;
	}
	parent->left = new_Left;
	return (new_Left);
}
