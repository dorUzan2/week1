#include "Utils.h"
#include <iostream>
using namespace std;

/*this function reverses a array of nums
* input: the array of nums, and it's size
* output: none
*/
void reverse(int* nums, unsigned int size)
{
	Stack* numArray = new Stack;
	initStack(numArray);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		push(numArray, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = numArray->list->value;
		numArray->list = numArray->list->next;
	}
}
/*this function reverses a array of nums, and it's size is 10 items 
* input: a num array
* output: the reversed array
*/
int* reverse10()
{
	int* nums = new int[10];
	int i = 0;
	cout << "enter 10 numbers: ";
	cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4] >> nums[5] >> nums[6] >> nums[7] >> nums[8] >> nums[9];

	reverse(nums, 10);
	return nums;
}