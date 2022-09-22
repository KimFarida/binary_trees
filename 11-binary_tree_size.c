#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: input binary tree
 * Return: number of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;
	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);

	if (!tree)
		return (0);

	return (1 + a + b);
}
