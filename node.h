struct node {
	int datum;
	struct node *a;
	struct node *b;
};

struct node *new_node(int datum);
