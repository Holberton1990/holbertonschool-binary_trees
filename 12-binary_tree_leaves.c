#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_leaves, right_leaves;

	/* If both left and right children are NULL, it's a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count the leaves in the left and right subtrees */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	/* Return the sum of leaves in left and right subtrees */
	return (left_leaves + right_leaves);
}

