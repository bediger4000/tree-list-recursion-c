#include <stdio.h>
#include <stdlib.h>
#include <node.h>
#include <tree.h>
#include <list.h>
#include <convert.h>

int main(int ac, char **av)
{
	struct node *root = NULL;
	int i;

	for (i = 1; i < ac; ++i)
	{
		int j = strtol(av[i], NULL, 10);
		root = add_tree_node(root, j);
	}

	printf("In-order traversal of tree:\n");
	print_tree(root);
	printf("\n");

	root = tree_to_list(root);

	printf("Traversal of list:\n");
	print_list(root);
	printf("\n");

	free_list(root);

	return 0;
}
