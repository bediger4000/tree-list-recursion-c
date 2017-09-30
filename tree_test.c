#include <stdio.h>
#include <stdlib.h>
#include <node.h>
#include <tree.h>

int main(int ac, char **av)
{
	struct node *root = NULL;
	int i;

	for (i = 1; i < ac; ++i)
	{
		int j = strtol(av[i], NULL, 10);
		root = add_tree_node(root, j);
	}

	print_tree(root);

	return 0;
}
