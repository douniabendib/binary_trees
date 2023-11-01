#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: NULL or newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Right;

	if (parent == NULL)
		return (NULL);
	new_Right = binary_tree_node(parent, value);

	if (new_Right == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_Right->right = parent->right;
		new_Right->right->parent = new_Right;
	}
	parent->right = new_Right;
	return (new_Right);
}
