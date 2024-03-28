#include "binary_trees.h"

/**
 * binary_tree_delete - free an entire tree using recursion
 * @tree: pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
    // Base case: If the tree is empty (NULL), return
    if (tree == NULL)
    {
        return;
    }

    // Recursively delete the left subtree
    binary_tree_delete(tree->left);
    
    // Recursively delete the right subtree
    binary_tree_delete(tree->right);

    // Once both subtrees are deleted, free the current node
    free(tree);
}
