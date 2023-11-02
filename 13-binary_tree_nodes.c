#include "binary_trees.h"
/**
 * binary_tree_nodes-  function that counts the nodes with at least 1 child in a binary tree
 * @tree:pointer to the root node of the tree to count the number of nodes
 * Return: 0 or num of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right || tree->left)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) +1);
	return (0);
}
