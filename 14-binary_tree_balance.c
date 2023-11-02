#include "binary_trees.h"
/**
 * binary_tree_height_b - function to calculate the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = 1 + binary_tree_height_b(tree->left);
	right_height = 1 + binary_tree_height_b(tree->right);
	if (right_height > left_height)
		return (right_height);
	return (left_height);
}
/**
 * binary_tree_balance-function that measures the balance
 * factor of a binary tree
 * @tree:pointer to the root node of the tree to measure the balance factor
 * Return: num of balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height_b(tree->left) + 1;
	right_h = binary_tree_height_b(tree->right) + 1;
	return (left_h - right_h);
}
