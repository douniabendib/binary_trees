#include "binary_trees.h"
/**
 * binary_tree_is_leaf_II - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf_II(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Left_height = 0, Right_height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
		Left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		Right_height = 1 + binary_tree_height(tree->right);
	return ((Left_height > Right_height) ? Left_height : Right_height);
}
/**
 * binary_tree_is_perfect - a function that checks
 * if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 it it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf_II(tree))
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height == right_height)
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
