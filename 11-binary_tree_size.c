#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	/* The size of the tree is the sum of the left and right subtree sizes, plus 1 for the root node */
	return (left_size + right_size + 1);
}

