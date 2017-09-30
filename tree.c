#include <stdio.h>

#include <node.h>
#include <tree.h>

/* in-order traversal of tree, with data printing */
void
print_tree(struct node *n)
{
	if (n)
	{
		print_tree(n->a);
		printf("%d\n", n->datum);
		print_tree(n->b);
	}
}

struct node *
add_tree_node(struct node *n, int datum)
{
	if (!n)
		n = new_node(datum);
	else {
		if (datum < n->datum)
			n->a = add_tree_node(n->a, datum);
		else if (datum > n->datum) 
			n->b = add_tree_node(n->b, datum);
		/* ignores any datum already present in tree. */
	}
	return n;
}
