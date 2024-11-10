#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct linkedList
{
	unsigned int value;
	linkedList* next;
}linkedList;

linkedList* remove(linkedList* head);

linkedList* add(linkedList* head, unsigned int newValue);

void printList(linkedList* head);

#endif LINKEDLIST_H /*LINKEDLIST_H*/