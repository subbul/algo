#include <stdio.h>

/* Bubble Sort
* Bubbles the max value to the right extreme of array
Run outer loop from the Last element-(size of array) till first element
Above loop will reduce from right most to left most

Run inner loop from index 0 till the outer loop limit
Above loop will reduce as first loop

Inner loop, check if element i is greater than i+1, left > right, then swap,
so that the max element is pushed to the right
*/

int main(int argc, char const *argv[])
{
//	int input_list[] = {3,53,22,7,25,36,10}; //Random
//  int input_list[] = {3,5,7,9,11,13,15,17}; // Ascending
  int input_list[] = {10,9,8,7,6,5,4,3,2,1}; //descending sorted
	int sizeof_list = sizeof(input_list)/sizeof(int);

	for (int outer_loop = sizeof_list; outer_loop> 0; outer_loop--)
	{
		/* inner loop runs till outerloop -1, so that the comparison of inner_loop and inner_loop+1 is not affected*/
		for (int inner_loop = 0; inner_loop < outer_loop-1; ++inner_loop)
		{
			if (input_list[inner_loop] > input_list[inner_loop+1])
			{
				int temp = input_list[inner_loop];
				input_list[inner_loop] = input_list [ inner_loop+1];
				input_list[inner_loop+1 ] = temp;

			}
		}
		/* code */
	}

	for (int i = 0; i < sizeof_list; ++i)
	{
		printf("%d ",input_list[i]);//FIXME
		/* code */
	}
	printf("\n");
		return 0;
}
