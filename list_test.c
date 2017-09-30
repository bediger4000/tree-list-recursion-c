#include <stdio.h>
#include <stdlib.h>
#include <node.h>
#include <list.h>

struct node list[] = {
	{0, &list[5], &list[1]},
	{1, &list[0], &list[2]},
	{2, &list[1], &list[3]},
	{3, &list[2], &list[4]},
	{4, &list[3], &list[5]},
	{5, &list[4], &list[0]},
};

int main(int ac, char **av)
{
	print_list(list);

	return 0;
}
