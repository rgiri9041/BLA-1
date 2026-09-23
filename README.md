**DS2 - BLA: STACKS, Queues and Binary Search Tree in C++**

Name: Raj Kumar Giri
Course: DS2
Date: 23rs September

## Overview
This repository contains a complete implementation of three fundamental data structures in C++ — **Stack**, **Circular Queue**, and **Binary Search Tree** — built entirely from scratch using **static arrays, pointers, and recursion**.

Each data structure includes:
- A complete, working C++ class
- Built-in error handling (overflow, underflow, duplicate rejection)
- A demonstration program showing all operations in action
- Clear, commented code explaining every step

### What is a Stack?
A **stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. The last element pushed is the first one popped — like a stack of plates.

###Operation Implemented

push()
pop()
peek()
isFull()
isEmpty()
displayAll()

### What is a Queue?
A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. Elements are added at the **rear** and removed from the **front** — like a checkout line.

### Why Circular?
A **linear queue** wastes space. After dequeuing elements, the front indices become unusable, and the rear eventually hits the array's end even when empty space exists at the beginning. A **circular queue** solves this by wrapping the rear back to index `0`.


### Operations Implemented
enqueue()
dequeue()
isEmpty()
isFull()
displayAll()

### Binary Search Tree
### What is a BST?
A **Binary Search Tree** is a binary tree with an ordering rule:
- **Left subtree** values < parent
- **Right subtree** values > parent
- **No duplicates** allowed

### Operation Implemented

insert()
inorder()
preorder()
postorder()


### References

1. GeeksforGeeks. *Stack Data Structure.* https://www.geeksforgeeks.org/stack-data-structure/
2. GeeksforGeeks. *Circular Queue — Introduction and Array Implementation.* https://www.geeksforgeeks.org/circular-queue-set-1-introduction-array-implementation/
3. GeeksforGeeks. *Binary Search Tree — Data Structure.* https://www.geeksforgeeks.org/binary-search-tree-data-structure/




