#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = 1, right = 1;

	if (tree->left)
		left += binary_tree_height(tree->left);
	if (tree->right)
		right += binary_tree_height(tree->right);

	return (left > right) ? left : right;
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL, or the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree ==  NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
