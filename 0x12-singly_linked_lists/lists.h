#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h);

typedef struct node{
	int value;
	struct node *link;
}list_t;

#endif
