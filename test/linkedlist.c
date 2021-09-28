//#include "../libft.h"
#include "stdio.h"
/*
1. insert before the head after the tail
2. delete head, middle and the end
3. create linked list
4. search through linked list
5. delete entire list
*/
#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct node{
	int data;
	struct node *next;
}	node;


node *create_node(int data)
{
	struct node *ptr;

	ptr = (node *)malloc(sizeof(node));
	ptr->data = data;
	ptr->next = NULL;
	return(ptr);
}

void add_front_d(node **head, node *new)
{
	new->next = *head;
	*head = new;
}

node *add_front_s(node *head, node *new)
{
	new->next = head;
	return(new);
}

void add_after_s(node *head, node *new)
{
	head->next = new;
}

void append(node *head, node *new)
{
	while(head->next != NULL)
		head = head->next;

	head->next = new;

}

//node *search_ret(node *head, int search)
//{
//	node *p1, *p2;
//	p1 = p2 = head;


//}
//void print_list(node **lst)
//{
//	node **tracer = lst;
//	while(*tracer)
//	{
//		printf("%d\n", (*tracer)->data);
//		tracer = &(*tracer)->next;
//	}
//}

void print_list(node *lst)
{
	while(lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}

//mistake
//void print_list(node **lst)
//{
//	node **tracer = lst;
//	while(*tracer)
//	{
//		printf("%d\n", (*tracer)->data);
//		*tracer = (*tracer)->next;
//	}
//}

//void PrintList(THING **head)
//{
//	THING **tracer;

//	tracer = head;
//	while (*tracer)
//	{
//		printf("%s \n", (*tracer)->item);
//		tracer = &(*tracer)->next;
//	}
//}

void insert_after(node *prev, node *new)
{
	new->next = prev->next;
	prev->next = new;
}

//void delete_node(node **head, int key)
//{
//	node* prev, *temp;

//	temp = *head;
//	if(temp != NULL && temp->data == key)

//}

BOOL find(node *lst, int data)
{
	if(lst->data == data)
		return (TRUE);
	if(lst->next == NULL)
		return (FALSE);

	return find(lst->next, data);
}

void lstadd_front(node **lst, node *new)
{
	if(new == NULL)
	{
		return;
	}
	new->next = *lst;
	*lst = new;
}

int		lstsize(node *lst)
{
	int count;

	count = 1;
	if(lst == NULL)
		return (0);
	while(lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

node	*lstlast(node *lst)
{
	if(lst)
	{
		while(lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}


void	lstadd_back(node **lst, node *new)
{
	node *ptr;

	ptr = lstlast(*lst);
	ptr->next = new;
}

int main()
{
	node *start = create_node(1);
	lstadd_front(&start, create_node(2));
	//node *start = create_node(1);
	//start = add_front_s(start, create_node(2));
	//append(start, create_node(3));
	//insert_after(start, create_node(2));
	lstadd_back(&start, create_node(3));
	print_list(start);
	printf("%d\n", lstsize(start));
	//printf("%d\n", find(start, 1));
}
