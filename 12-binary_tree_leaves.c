#include "binary_trees.h"

/**
 * size_t binary_tree_leaves - counts number of leaves in a binary tree
 * @tree: Pointer to the tree
 *
 * Return: number of leaves or 0 if none
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    
    if (tree == NULL)
        return (0);
    
    if (tree->left == NULL && tree->right == NULL)
    return 1;

    return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
