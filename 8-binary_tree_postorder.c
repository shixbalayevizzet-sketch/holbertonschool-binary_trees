#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using
 * post-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description: Visits children before processing the root.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* 1. Traverse the Left subtree */
	binary_tree_postorder(tree->left, func);

	/* 2. Traverse the Right subtree */
	binary_tree_postorder(tree->right, func);

	/* 3. Visit the Root (process the current node) */
	func(tree->n);
}
