#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 * @node: Node to check
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    // If the node is NULL or has a parent, it is not a root
    if (node == NULL || node->parent != NULL)
        return (0);
    
    // If the node has no parent, it is a root
    return (1);
}
