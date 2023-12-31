#include "binary_trees.h"
/**
 * binary_tree_size-function that measures the size of a binary tree
 * @tree: function that measures the size of a binary tree
 * Return: 0 or size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
