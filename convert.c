#include <stdio.h>

#include <node.h>
#include <convert.h>

/*
 * Return the head (lowest value datum) of a doubly-linked
 * list, converted from an ordered binary tree in place.
 */
struct node *
tree_to_list(struct node *n)
{
	struct node *head = NULL;

	if (n)
	{
		struct node *tail = NULL;

		head = tree_to_list(n->a);

		tail = tree_to_list(n->b);

		if (head)
		{
			/* add current node to end of list */
			n->a = head->a;
			head->a->b = n;
			n->b = head;
			head->a = n;
		} else {
			/* make current node into single-element list */
			head = n;
			head->a = n;
			head->b = n;
		}

		/* head either points to a doubly-linked list with n
		 * as its "last" node, or a single-element doubly-linked
		 * list with n as its only node. */

		if (tail)
		{
			/* append list named "tail" to end of list
			 * named "head" */
			tail->a->b = head;
			head->a->b = tail;
			head->a = tail->a;
		}
	}

	return head;
}
