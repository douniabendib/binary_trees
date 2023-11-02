#include "binary_trees.h"
/**
 * binary_tree_is_leaf_2 - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf_II(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

/**
 * binary_tree_height_2 - a function that measures
 * the height of a binary tree
 * @tree:  is a pointer to the root node of the
 * tree to measure the height.
 * Return: the number of height
 */
size_t binary_tree_height_II(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = 1 + binary_tree_height_II(tree->left);
	right_height = 1 + binary_tree_height_II(tree->right);
	if (left_height != right_height)
		return (0);
	return (1);
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	else if (binary_tree_is_leaf_II(tree))
		return (1);

	left_height = binary_tree_height_II(tree->left);
	right_height = binary_tree_height_II(tree->right);
	return (left_height * right_height);
}
