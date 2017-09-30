#include <stdio.h>  /* NULL */
#include <stdlib.h>  /* malloc */

#include <node.h>

struct node *
new_node(int datum)
{
	struct node *r = malloc(sizeof(*r));
	if (r)
	{
		r->datum = datum;
		r->a = r->b = NULL;
	}
	return r;
}
