#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef char 	DATA;

struct linked_list {
	DATA				d;
	struct linked_list	*next;
};

typedef struct linked_list	ELEMENT;
typedef ELEMENT				*LINK;

LINK string_to_list(char s[])
{
	LINK head;

	if(s[0] == '\0')
		return NULL;
	else{
		head = malloc(sizeof(ELEMENT));
		head->d = s[0];
		head->next = string_to_list(s + 1);
		return head;
	}
}

int count(LINK head){
	if(head == NULL)
		return 0;
	else
		return (1 + count(head->next));
}

int count_it(LINK head)
{
	int cnt = 0;
	for( ; head != NULL ; head = head->next)
		cnt++;
	return cnt;
}

void print_list(LINK head)
{
	if(head == NULL)
		printf("NULL");
	else {
		printf("%c -- > ", head->d);
		print_list(head->next);
	}
}

void concatenate(LINK a, LINK b)
{
	assert(a != NULL);
	if(a->next == NULL)
		a->next = b;
	else
		concatenate(a->next, b);
}

void insert(LINK p1, LINK p2, LINK q)
{
	assert(p1->next == p2);
	p1->next = q;
	q->next = p2;
}


int main()
{
	LINK h;
	h = string_to_list("ABC");
	printf("The list h is \n");
	print_list(h);
	printf("\nThis list has %d elements.\n", count(h));

	insert(h, h->next, string_to_list("X"));
	printf("The list h is(after insert 'X')\n");
	print_list(h);


	LINK a, b;
	a = string_to_list("STAR");
	b = string_to_list("BUCKS");
	printf("\n\nThe list a is\n");
	print_list(a);
	printf("\nThe list b is\n");
	print_list(b);

	concatenate(a, b);

	printf("\nThe list a is(after concat)\n");
	print_list(a);
	printf("\nThe list b is(after concat)\n");
	print_list(b);
	printf("\n");
	
	return 0;
}
