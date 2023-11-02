#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left_height, Right_height;

	if (tree == NULL)
		return (0);
	Left_height  = binary_tree_height(tree->left);
	Right_height = binary_tree_height(tree->right);
	if (Left_height > Right_height)
		return (Left_height + 1);
	else
		return (Right_height + 1);
}
