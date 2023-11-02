#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left_height = 0, Right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		Left_height = binary_tree_height(tree->left);
		Right_height = binary_tree_height(tree->right);
		if ( Right_height > Left_height)
			return (Right_height + 1);
		else
			return (Left_height + 1);
	}
}
