#include "Stack.h"

/*this function adds a value into a stack
* input: a stack, the value
* output: none
*/
void push(Stack* s, unsigned int element)
{
	s->list = add(s->list, element);
	linkedList* curr = s->list;
	while (curr->next)
	{
		curr = curr->next;
	}

}
/*this function removes the head of a stack
* input: a stack
* output: -1 if its empty, or the removed value
*/
int pop(Stack* s)
{
	if (s == NULL || s->list == NULL)
	{
		return -1;
	}
	int tempValue = s->list->value;
	s->list = remove(s->list);
	return tempValue;
}// Return -1 if stack is empty
/*this function initioates a stack
* input: a stack
* output: none
*/
void initStack(Stack* s)
{
	s->list = NULL;
}
/*this function cleans the stack
* input: a stack
* output: none
*/
void cleanStack(Stack* s)
{
	if (s->list)
	{
		printf("%d", s->list->value);
		pop(s);
	}
	s->list = NULL;
}
/*this function checks if a stack is empty
* input: a stack
* output: if it is empty 1, if it isn't 0
*/
bool isEmpty(Stack* s)
{
	return s->list == NULL;
}
/*this function a stack is full
* input: a stack
* output: false cause it can never be full
*/
bool isFull(Stack* s)
{
	return false;
}