#include "binary_trees.h"

/**
 * binary_tree_sibling-function to find the sibling of a node in a binary tree
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right != NULL && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
