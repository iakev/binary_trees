# Binary Trees

Welcome to the **Binary Trees** repository. This repository contains implementations of binary trees in C, a fundamental data structure in computer science.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Program Listing](#program-listing)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)
- [Author](#author)

## Introduction

In this repository, you'll find C programs that demonstrate various operations and algorithms related to binary trees. Binary trees are hierarchical data structures that are widely used in computer science for tasks like sorting, searching, and organizing data efficiently.

## Getting Started

Before you can use the programs in this repository, you'll need to compile them. Here are the steps to get started:

1. Clone this repository to your local machine using the following command:

```bash
git clone https://github.com/iakev/binary_trees.git
```

2. Navigate to the cloned repository:

```bash
cd binary_trees
```

3. Compile the desired program using a C compiler (e.g., GCC). Replace `program.c` with the name of the program you want to compile, and `output` with your desired output filename:

```bash
gcc -Wall -Werror -Wextra -pedantic program.c -o output
```

4. Execute the compiled program:

```bash
./output
```


## Program Listing

Below are the C programs in this repository along with their descriptions:

### [0-binary_tree_node.c](https://github.com/iakev/binary_trees/blob/main/0-binary_tree_node.c)

This program defines a function `binary_tree_node` that creates a new binary tree node.

### [1-binary_tree_insert_left.c](https://github.com/iakev/binary_trees/blob/main/1-binary_tree_insert_left.c)

This program defines a function `binary_tree_insert_left` that inserts a new node as the left-child of a given node in a binary tree.

### [2-binary_tree_insert_right.c](https://github.com/iakev/binary_trees/blob/main/2-binary_tree_insert_right.c)

This program defines a function `binary_tree_insert_right` that inserts a new node as the right-child of a given node in a binary tree.

### [3-binary_tree_delete.c](https://github.com/iakev/binary_trees/blob/main/3-binary_tree_delete.c)

This program defines a function `binary_tree_delete` that deletes an entire binary tree.

### [4-binary_tree_is_leaf.c](https://github.com/iakev/binary_trees/blob/main/4-binary_tree_is_leaf.c)

This program defines a function `binary_tree_is_leaf` that checks if a node in a binary tree is a leaf node.

### [5-binary_tree_is_root.c](https://github.com/iakev/binary_trees/blob/main/5-binary_tree_is_root.c)

This program defines a function `binary_tree_is_root` that checks if a node in a binary tree is the root node.

### [6-binary_tree_preorder.c](https://github.com/iakev/binary_trees/blob/main/6-binary_tree_preorder.c)

This program defines a function `binary_tree_preorder` that traverses a binary tree in pre-order (root-left-right) and applies a function to each node.

### [7-binary_tree_inorder.c](https://github.com/iakev/binary_trees/blob/main/7-binary_tree_inorder.c)

This program defines a function `binary_tree_inorder` that traverses a binary tree in-order (left-root-right) and applies a function to each node.

### [8-binary_tree_postorder.c](https://github.com/iakev/binary_trees/blob/main/8-binary_tree_postorder.c)

This program defines a function `binary_tree_postorder` that traverses a binary tree in post-order (left-right-root) and applies a function to each node.

### [9-binary_tree_height.c](https://github.com/iakev/binary_trees/blob/main/9-binary_tree_height.c)

This program defines a function `binary_tree_height` that measures the height of a binary tree.

### [10-binary_tree_depth.c](https://github.com/iakev/binary_trees/blob/main/10-binary_tree_depth.c)

This program defines a function `binary_tree_depth` that measures the depth of a node in a binary tree.

### [11-binary_tree_size.c](https://github.com/iakev/binary_trees/blob/main/11-binary_tree_size.c)

This program defines a function `binary_tree_size` that calculates the size (number of nodes) of a binary tree.

## [12-binary_tree_leaves.c](https://github.com/iakev/binary_trees/blob/main/12-binary_tree_leaves.c)

This program defines a function `binary_tree_leaves` that counts the leaves in a binary tree.

### [13-binary_tree_nodes.c](https://github.com/iakev/binary_trees/blob/main/13-binary_tree_nodes.c)

This program defines a function `binary_tree_nodes` that counts the nodes with at least one child in a binary tree.

### [14-binary_tree_balance.c](https://github.com/iakev/binary_trees/blob/main/14-binary_tree_balance.c)

This program defines a function `binary_tree_balance` that computes the balance factor of a binary tree.

### [15-binary_tree_is_full.c](https://github.com/iakev/binary_trees/blob/main/15-binary_tree_is_full.c)

This program defines a function `binary_tree_is_full` that checks if a binary tree is a full binary tree.

### [16-binary_tree_is_perfect.c](https://github.com/iakev/binary_trees/blob/main/16-binary_tree_is_perfect.c)

This program defines a function `binary_tree_is_perfect` that checks if a binary tree is a perfect binary tree.

### [17-binary_tree_sibling.c](https://github.com/iakev/binary_trees/blob/main/17-binary_tree_sibling.c)

This program defines a function `binary_tree_sibling` that finds the sibling of a given node in a binary tree.

### [18-binary_tree_uncle.c](https://github.com/iakev/binary_trees/blob/main/18-binary_tree_uncle.c)

This program defines a function `binary_tree_uncle` that finds the uncle of a given node in a binary tree.

### [100-binary_trees_ancestor.c](https://github.com/iakev/binary_trees/blob/main/100-binary_trees_ancestor.c)

This program defines a function `binary_trees_ancestor` that finds the lowest common ancestor of two nodes in a binary tree.

### [100-short_binary_trees_ancestor.c](https://github.com/iakev/binary_trees/blob/main/100-short_binary_trees_ancestor.c)

This program defines a function `binary_trees_ancestor` that finds the lowest common ancestor of two nodes in a binary tree (optimized version).

### [102-binary_tree_is_complete.c](https://github.com/iakev/binary_trees/blob/main/102-binary_tree_is_complete.c)

This program defines a function `binary_tree_is_complete` that checks if a binary tree is complete.

### [103-binary_tree_rotate_left.c](https://github.com/iakev/binary_trees/blob/main/103-binary_tree_rotate_left.c)

This program defines a function `binary_tree_rotate_left` that performs a left-rotation on a binary tree.

### [104-binary_tree_rotate_right.c](https://github.com/iakev/binary_trees/blob/main/104-binary_tree_rotate_right.c)

This program defines a function `binary_tree_rotate_right` that performs a right-rotation on a binary tree.

### [110-binary_tree_is_bst.c](https://github.com/iakev/binary_trees/blob/main/110-binary_tree_is_bst.c)

This program defines a function `binary_tree_is_bst` that checks if a binary tree is a binary search tree (BST).

### [112-array_to_bst.c](https://github.com/iakev/binary_trees/blob/main/112-array_to_bst.c)

This program defines a function `array_to_bst` that builds a binary search tree (BST) from an array.

### [113-bst_search.c](https://github.com/iakev/binary_trees/blob/main/113-bst_search.c)

This program defines a function `bst_search` that searches for a value in a binary search tree (BST).

### [114-bst_remove.c](https://github.com/iakev/binary_trees/blob/main/114-bst_remove.c)

This program defines a function `bst_remove` that removes a node with a specified value from a binary search tree (BST).

### [120-binary_tree_is_avl.c](https://github.com/iakev/binary_trees/blob/main/120-binary_tree_is_avl.c)

This program defines a function `binary_tree_is_avl` that checks if a binary tree is an AVL tree.

### [121-avl_insert.c](https://github.com/iakev/binary_trees/blob/main/121-avl_insert.c)

This program defines a function `avl_insert` that inserts a value into an AVL tree.



## How to Use

Provide instructions on how to use the programs and any specific input requirements or expected outputs.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and test them thoroughly.
4. Create a pull request with a clear description of your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](https://github.com/iakev/binary_trees/blob/main/LICENSE.md) file for details.

## Author

Your Name

