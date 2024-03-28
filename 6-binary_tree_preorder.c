#include "binary_trees.h"

/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: tree to traverse
 * @func: function to apply to each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    // Base case: If the tree is empty or the function pointer is NULL, return
    if (tree == NULL || func == NULL)
        return;

    // Apply the function to the current node
    func(tree->n);
    
    // Recursively traverse the left subtree
    binary_tree_preorder(tree->left, func);
    
    // Recursively traverse the right subtree
    binary_tree_preorder(tree->right, func);
}
