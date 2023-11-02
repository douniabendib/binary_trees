#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Left_height = 0, Right_height = 0;

	if (tree == NULL)
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
 * binary_tree_is_full - function to check if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height == right_height && binary_tree_is_full(tree))
		return (1);
	return (0);
}
