#include "LinkedList.h"
#include <stdio.h>

/*this function removes a node from a linked list
* input: the head node of a linked list
* output: the head node of a linked list
*/
linkedList* remove(linkedList* head)
{
	if (head == nullptr)
	{
		return nullptr;
	}

	if (head->next == nullptr)
	{
		delete head;
		return NULL;
	}

	linkedList* newHead = head->next;

	delete head;

	return newHead;
}
/*this function adds a node to a linked list
* input: the head node of a linked list
* output: the head node of a linked list
*/
linkedList* add(linkedList* head, unsigned int newValue)
{
	linkedList* newItem = new linkedList;
	newItem->next = new linkedList;

	newItem->next = head;
	newItem->value = newValue;
	return newItem;
}
/*this function prints a linked list
* input: the head node of a linked list
* output: none
*/
void printList(linkedList* head) 
{
	linkedList* curr = head;
	while (curr)
	{
		printf("%d", curr->value);
		curr = curr->next;
	}
}