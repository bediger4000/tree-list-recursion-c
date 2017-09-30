# Great Tree List Recursion Problem

Wed Feb 20 09:59:10 MST 2008

My solution to Stanford CS109's "Great Tree List Recursion Problem".
See TreeListRecursion.pdf for problem definition.

This time in C. I did a [Go version](https://github.com/bediger4000/tree-list-recursion-go) more recently.
See the Go version repository for a comparison and some software engineering opinions.

## Executable units

+ tree_test
	- command line binary tree builder and printer
+ list_test
	- prints out a doubly-linked-list created by
	  linker prestidigitation.
+ tree_convert
	- creates binary tree, then converts to doubly-linked
	  list in place, prints list.

## Example usage

    ./tree_test 0 1 2 3 4

Creates what amounts to a linked list,
every tree node on the "greater than" side
of its parent. 4 datum node at leaf

    ./tree_test 4 3 2 1 0

Creates what amounts to a linked list,
every tree node on the "less than" side
of its parent. 0 (zero) datum node at
leaf.

    ./list_test

Always prints out the same doubly-linked list

    ./tree_convert 0

Single element list test.

    ./tree_convert 0 1

"Greater than" tree test

    ./tree_convert 1 0

"Less than" tree test

    ./tree_convert 2 1 3
    ./tree_convert 2 3 1

Both should produce a tree with 2-datum-node as root.

    ./tree_convert 2 7 6 4 3 5 1

Zig-zag tree.  "Less than" tree test. "Greater than" tree test.
