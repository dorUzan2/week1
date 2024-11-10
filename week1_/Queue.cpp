#include "Queue.h"

void initQueue(Queue* q, unsigned int size) 
{
	q->array = new unsigned int[size];
	q->maxSize = size;
	q->size = 0;
}
void cleanQueue(Queue* q)
{
	q->size = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->array[q->size] = newValue;
	q->size++;
}
int dequeue(Queue* q)
{
	int i = 0;
	int first_in_queue = q->array[0];

	if (isEmpty(q))
	{
		return -1;
	}
	
	for (i = 0; i <= q->size; i++)
	{
		q->array[i] = q->array[i + 1];
	}
	q->size--;
	return first_in_queue;
}

bool isEmpty(Queue* s)
{
	return s->size == 0;
}
bool isFull(Queue* s)
{
	return s->size == s->maxSize;
}