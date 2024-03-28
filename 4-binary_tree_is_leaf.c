#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    // If the node is NULL, it cannot be a leaf
    if (node == NULL)
        return (0);
    
    // If both left and right children are NULL, the node is a leaf
    if (node->left == NULL && node->right == NULL)
        return (1);
    
    // If either left or right child is not NULL, the node is not a leaf
    return (0);
}
